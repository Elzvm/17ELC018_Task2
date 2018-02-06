class motor{
  public:	motor(unsigned char);
  void start motor();
  void stop motor();
  void program position();
  private:
  unsigned char port_map;
  int motor_speed;
  bool motor_direction;
  bool motor status;
};
