public class CongTy{
    private String tenCongTy;
    private String tenNhanVien;
    private int soNhanVien;
    private static int SO_NV_MAX;
    protected double loiNhuan;
    private boolean NhanVien;
    public boolean themNhanVien(boolean NhanVien, int soNhanVien){
        NhanVien = false;
        if(soNhanVien < SO_NV_MAX){
            return true;
        }
        else{
            return false;
        }
    }
    public void setThongTin(String tenCongTy){
        this.tenCongTy = tenCongTy;
    }
    public String inThongTin(){
        return tenCongTy;
    }
    public void setLoiNhuan(double loiNhuan){
        this.loiNhuan = loiNhuan;
    }
    public double tinhTongLuong(){
        return loiNhuan;
    }
}
