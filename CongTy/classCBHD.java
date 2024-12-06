class CanBoHopDong extends NhanVien{
    private double luongHopDong;
    public void setThongTin(String tenNhanVien){
        this.tenNhanVien = tenNhanVien;
    }
    public void setLuongHopDong(double luongHopDong){
        this.luongHopDong = luongHopDong;
    }
    public String inThongTin(){
        return tenNhanVien;
    }
    public double tinhLuong(){
        return luongHopDong;
    }
}