class GiamDoc extends CanBoCoHuu implements QuanLy{
    protected static double heSo = 0.05;
    private static double phuCap;
    public void setThongTin(String tenNhanVien){
        this.tenNhanVien = tenNhanVien;
    }
    public String inThongTin(){
        return tenNhanVien;
    }
    public void setHoaHong(double loiNhuan){
        this.loiNhuan = loiNhuan;
    }
    public double tinhHoaHong(){
        return loiNhuan*heSo;
    }
    public void setLuongCoBan(double luongCoBan, double loiNhuan){
        this.luongCoBan = luongCoBan;
    }
    public double tinhLuong(){
        return luongCoBan*heSoLuong + loiNhuan*heSo + phuCap;
    }
}
