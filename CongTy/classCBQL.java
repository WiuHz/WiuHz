class CanBoQuanLy extends CanBoCoHuu implements QuanLy{
    protected static double heSo = 0.002;
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
    public void setTinhLuong(double luongCoBan){
        this.luongCoBan = luongCoBan;
    }
    public double tinhLuong(){
        return luongCoBan*heSoLuong + loiNhuan*heSo;
    }
}