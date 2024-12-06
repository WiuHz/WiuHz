class TruongPhong extends CanBoCoHuu{
    private static double phuCap;
    public void setThongTin(String tenNhanVien){
        this.tenNhanVien = tenNhanVien;
    }
    public String inThongTin(){
        return tenNhanVien;
    }
    public void setLuongCoBan(double luongCoBan){
        this.luongCoBan = luongCoBan;
    }
    public double tinhLuong(){
        return luongCoBan*heSoLuong + phuCap;
    }
}