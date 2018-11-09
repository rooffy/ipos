u16int memread(u32int);
void memwrite(u32int, u16int, u16int);
void cpureset(void);
int step(void);
int z80step(void);
u8int z80read(u16int);
void z80write(u16int, u8int);
u8int z80in(u8int);
void z80out(u8int, u8int);
int intack(int);
void vdpstep(void);
void flush(void);
void dmastep(void);
void vdpmode(void);
void ymwrite(u8int, u8int, u8int);
void initaudio(void);
void audiosample(void);
int audioout(void);
void ymreset(void);
void ymstep(void);