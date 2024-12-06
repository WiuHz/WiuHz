class CanBoCoHuu extends NhanVien{
    protected double luongCoBan;
    protected static double heSoLuong;
    public void setThongTin(String tenNhanVien){
        this.tenNhanVien = tenNhanVien;
    }
    public String inThongTin(){
        return tenNhanVien;
    }
    public void setLuongCoBan(int luongCoBan){
        this.luongCoBan = luongCoBan;
    }
    public double tinhLuong(){
        return luongCoBan*heSoLuong;
    }
}