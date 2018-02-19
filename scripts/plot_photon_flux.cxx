
void plot_photon_flux(const char* file="bub_sim_10.root",
                      const char* dir = "/work/accel/bubble/whit/data/nominal/data",
                      const char* phy_list = "Shielding_EMZ")
{

  std::string fname = std::string(dir) + "/" + std::string(file);
  auto f = new TFile(fname.c_str(), "READ");
  f->cd();

  std::string hstack_title = "Phy. list:" + std::string(phy_list) + "; E_{#gamma} [MeV]; [arb.]";

  auto hs = new THStack("",hstack_title.c_str());

  double hmax = 0.0;

  for(int i = 0; i<7; i++) {
    std::string hist_name = "/p" + std::to_string(i) + "/forw0";
    std::cout << hist_name << std::endl;
    auto h = (TH1*)f->FindObjectAny(hist_name.c_str());
    if(h){
      if(i==1) {
        hmax = h->GetMaximum();
      }
      h->SetLineColor(i+1);
      h->SetLineWidth(2);
      double zpos = (i+1)*32.0/10.0;
      std::string htitle = std::to_string(i)+"";
      h->SetTitle(htitle.c_str());
      hs->Add(h,"hist");
    } else {
      std::cout << " hist not found \n";
    }
  }

  auto c = new TCanvas();
  gPad->SetLogy(true);
  hs->Draw("nostack");
  gPad->BuildLegend(0.8,0.50,0.95,0.95,"distance");
  hs->GetXaxis()->CenterTitle(true);
  hs->GetYaxis()->CenterTitle(true);
  //hs->SetMaximum(hmax);//+10000);
  c->Update();
  c->SaveAs("photon_flux.pdf");

  std::cout << " pwd: " << gSystem->pwd() << std::endl;

  c = new TCanvas();
  auto hxy = (TH1*)f->FindObjectAny("/p3/fhXY2_gamma");
  if(hxy){
    hxy->SetTitle(";x [cm]; y[cm]");
    hxy->Draw("colz");
    hxy->GetXaxis()->CenterTitle(true);
    hxy->GetYaxis()->CenterTitle(true);
    c->Update();
    c->SaveAs("photon_flux_XY.pdf");
  }

  c = new TCanvas();
  hxy = (TH1*)f->FindObjectAny("/p3/fhXY2_all");
  if(hxy){
    hxy->SetTitle(";x [cm]; y[cm]");
    hxy->Draw("colz");
    hxy->GetXaxis()->CenterTitle(true);
    hxy->GetYaxis()->CenterTitle(true);
    c->Update();
    c->SaveAs("all_flux_XY.pdf");
  }

}
