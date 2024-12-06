class NhanVien extends CongTy{
    protected String tenNhanVien;
    public void setThongTin(String tenNhanVien){
        this.tenNhanVien = tenNhanVien;
    }
    public void setTinhLuong(double loiNhuan){
        this.loiNhuan = loiNhuan;
    }
    public String inThongTin(){
        return tenNhanVien;
    }
    public double tinhLuong(){
        return loiNhuan;
    }
}