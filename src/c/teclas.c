#include "../h/liburutegiak.h"

int teklaAukera(JOKO_ELEMENTUA pianoa, int tekla, int *posX)
{
	if ((tekla == TECLA_q))
	{
		playSound(pianoa.nota[0]);
		*posX = 352; //356
		return FA;
	}
	if ((tekla == TECLA_w))
	{
		playSound(pianoa.nota[2]);
		*posX = 386; //390
		return SOL;
	}
	if ((tekla == TECLA_e))
	{
		playSound(pianoa.nota[4]);
		*posX = 421; //425
		return LA;
	}
	if ((tekla == TECLA_r))
	{
		playSound(pianoa.nota[6]);
		*posX = 456; //460
		return SI;
	}
	if ((tekla == TECLA_t))
	{
		playSound(pianoa.nota[7]);
		*posX = 488; //492
		return DO;
	}
	if ((tekla == TECLA_y))
	{
		playSound(pianoa.nota[9]);
		*posX = 522; //526
		return RE;
	}
	if ((tekla == TECLA_u))
	{
		playSound(pianoa.nota[11]);
		*posX = 556; //560
		return MI;
	}
	if ((tekla == TECLA_i))
	{
		playSound(pianoa.nota[12]);
		*posX = 590; //594
		return FA;
	}
	if ((tekla == TECLA_o))
	{
		playSound(pianoa.nota[14]);
		*posX = 623; //627
		return SOL;
	}
	if ((tekla == TECLA_p))
	{
		playSound(pianoa.nota[16]);
		*posX = 658; //662
		return LA;
	}
	if ((tekla == TECLA_a))
	{
		playSound(pianoa.nota[18]);
		*posX = 692; //696
		return SI;
	}
	if ((tekla == TECLA_s))
	{
		playSound(pianoa.nota[19]);
		*posX = 726; //730
		return DO;
	}
	if ((tekla == TECLA_d))
	{
		playSound(pianoa.nota[21]);
		*posX = 762; //764
		return RE;
	}
	if ((tekla == TECLA_f))
	{
		playSound(pianoa.nota[23]);
		*posX = 794; //798
		return MI;
	}
	if ((tekla == TECLA_g))
	{
		playSound(pianoa.nota[24]);
		*posX = 829; //833
		return FA;
	}
	if ((tekla == TECLA_h))
	{
		playSound(pianoa.nota[26]);
		*posX = 862; //866
		return SOL;
	}
	if ( (tekla == TECLA_j))
	{
		playSound(pianoa.nota[28]);
		*posX = 896; //900
		return LA;
	}
	if ((tekla == TECLA_k))
	{
		playSound(pianoa.nota[30]);
		*posX = 930; //934
		return SI;
	}
	if ((tekla == TECLA_l))
	{
		playSound(pianoa.nota[31]);
		*posX = 966; //970
		return DO;
	}
	if ((tekla == TECLA_z))
	{
		playSound(pianoa.nota[33]);
		*posX = 998; //1002
		return RE;
	}
	if ((tekla == TECLA_x))
	{
		playSound(pianoa.nota[35]);
		*posX = 1032; //1036
		return MI;
	}
	if ((tekla == TECLA_c))
	{
		playSound(pianoa.nota[36]);
		*posX = 1067; //1071
		return FA;
	}
	if ((tekla == TECLA_v))
	{
		playSound(pianoa.nota[38]);
		*posX = 1100; //1104
		return SOL;
	}
	if ((tekla == TECLA_b))
	{
		playSound(pianoa.nota[40]);
		*posX = 1133; //1137
		return LA;
	}
	if ((tekla == TECLA_n))
	{
		playSound(pianoa.nota[42]);
		*posX = 1167; //1171
		return SI;
	}
	if ((tekla == TECLA_m))
	{
		playSound(pianoa.nota[43]);
		*posX = 1201; //1205
		return DO;
	}
	if ((tekla == TECLA_1))
	{
		playSound(pianoa.nota[44]);
		*posX = 12; //16
		return DO;
	}
	if ((tekla == TECLA_2))
	{
		playSound(pianoa.nota[46]);
		*posX = 46; //50
		return RE;
	}
	if ((tekla == TECLA_3))
	{
		playSound(pianoa.nota[48]);
		*posX = 80; //84
		return MI;
	}
	if ((tekla == TECLA_4))
	{
		playSound(pianoa.nota[49]);
		*posX = 114; //118
		return FA;
	}
	if ((tekla == TECLA_5))
	{
		playSound(pianoa.nota[51]);
		*posX = 148; //152
		return SOL;
	}
	if ((tekla == TECLA_6))
	{
		playSound(pianoa.nota[53]);
		*posX = 182; //186
		return LA;
	}
	if ((tekla == TECLA_7))
	{
		playSound(pianoa.nota[55]);
		*posX = 216; //220
		return SI;
	}
	if ((tekla == TECLA_8))
	{
		playSound(pianoa.nota[56]);
		*posX = 250; //254
		return DO;
	}	
	if ((tekla == TECLA_9))
	{
		playSound(pianoa.nota[58]);
		*posX = 284; //288
		return RE;
	}
	if ((tekla == TECLA_0))
	{
		playSound(pianoa.nota[60]);
		*posX = 317; //321
		return MI;
	}
	return 0;
}

int teklaAukeraSos(JOKO_ELEMENTUA pianoa, int tekla, int *posX)
{
	if ((tekla == TECLA_q))
	{
		playSound(pianoa.nota[1]);
		*posX = 371; //375
		return FA;
	}
	if ((tekla == TECLA_w))
	{
		playSound(pianoa.nota[3]);
		*posX = 405; //409
		return SOL;		
	}
	if ((tekla == TECLA_e))
	{
		playSound(pianoa.nota[5]);
		*posX = 439; //443
		return LA;		
	}
	if ((tekla == TECLA_t))
	{
		playSound(pianoa.nota[8]);
		*posX = 508; //512
		return DO;		
	}
	if ((tekla == TECLA_y))
	{
		playSound(pianoa.nota[10]);
		*posX = 541; //545
		return RE;		
	}
	if ((tekla == TECLA_i))
	{
		playSound(pianoa.nota[13]);
		*posX = 609; //613
		return FA;		
	}
	if ((tekla == TECLA_o))
	{
		playSound(pianoa.nota[15]);
		*posX = 645; //649
		return SOL;		
	}
	if ((tekla == TECLA_p))
	{
		playSound(pianoa.nota[17]);
		*posX = 678; //682
		return LA;		
	}
	if ((tekla == TECLA_s))
	{
		playSound(pianoa.nota[20]);
		*posX = 746; //750
		return DO;		
	}
	if ((tekla == TECLA_d))
	{
		playSound(pianoa.nota[22]);
		*posX = 779; //783
		return RE;		
	}
	if ((tekla == TECLA_g))
	{
		playSound(pianoa.nota[25]);
		*posX = 846; //850
		return FA;		
	}
	if ((tekla == TECLA_h))
	{
		playSound(pianoa.nota[27]);
		*posX = 882; //886
		return SOL;		
	}
	if ((tekla == TECLA_j))
	{
		playSound(pianoa.nota[29]);
		*posX = 915; //919
		return LA;		
	}
	if ((tekla == TECLA_l))
	{
		playSound(pianoa.nota[32]);
		*posX = 984; //988
		return DO;		
	}
	if ((tekla == TECLA_z))
	{
		playSound(pianoa.nota[34]);
		*posX = 1018; //1022
		return RE;		
	}
	if ((tekla == TECLA_c))
	{
		playSound(pianoa.nota[37]);
		*posX = 1086; //1090
		return FA;		
	}
	if ((tekla == TECLA_v))
	{
		playSound(pianoa.nota[39]);
		*posX = 1120; //1124
		return SOL;		
	}
	if ((tekla == TECLA_b))
	{
		playSound(pianoa.nota[41]);
		*posX = 1154; //1158
		return LA;		
	}
	if ((tekla == TECLA_1))
	{
		playSound(pianoa.nota[45]);
		*posX = 32; //36
		return DO;		
	}
	if ((tekla == TECLA_2))
	{
		playSound(pianoa.nota[47]);
		*posX = 66; //70
		return RE;		
	}
	if ((tekla == TECLA_4))
	{
		playSound(pianoa.nota[50]);
		*posX = 134; //138
		return FA;		
	}
	if ((tekla == TECLA_5))
	{
		playSound(pianoa.nota[52]);
		*posX = 168; //172
		return SOL;		
	}
	if ((tekla == TECLA_6))
	{
		playSound(pianoa.nota[54]);
		*posX = 202; //206
		return LA;		
	}
	if ((tekla == TECLA_8))
	{
		playSound(pianoa.nota[57]);
		*posX = 270; //274
		return DO;		
	}
	if ((tekla == TECLA_9))
	{
		playSound(pianoa.nota[59]);
		*posX = 304; //308
		return RE;
	}
	return 0;
}

void carga(JOKO_ELEMENTUA *pianoa, int aukera)
{
	switch (aukera)
	{
		case 1:
			pianoa->nota[0] = loadSound("./media/sounds/Piano/q.wav");
			pianoa->nota[1] = loadSound("./media/sounds/Piano/q-mayus.wav");
			pianoa->nota[2] = loadSound("./media/sounds/Piano/w.wav");
			pianoa->nota[3] = loadSound("./media/sounds/Piano/w-mayus.wav");
			pianoa->nota[4] = loadSound("./media/sounds/Piano/e.wav");
			pianoa->nota[5] = loadSound("./media/sounds/Piano/e-mayus.wav");
			pianoa->nota[6] = loadSound("./media/sounds/Piano/r.wav");
			pianoa->nota[7] = loadSound("./media/sounds/Piano/t.wav");
			pianoa->nota[8] = loadSound("./media/sounds/Piano/t-mayus.wav");
			pianoa->nota[9] = loadSound("./media/sounds/Piano/y.wav");
			pianoa->nota[10] = loadSound("./media/sounds/Piano/y-mayus.wav");
			pianoa->nota[11] = loadSound("./media/sounds/Piano/u.wav");
			pianoa->nota[12] = loadSound("./media/sounds/Piano/i.wav");
			pianoa->nota[13] = loadSound("./media/sounds/Piano/i-mayus.wav");
			pianoa->nota[14] = loadSound("./media/sounds/Piano/o.wav");
			pianoa->nota[15] = loadSound("./media/sounds/Piano/o-mayus.wav");
			pianoa->nota[16] = loadSound("./media/sounds/Piano/p.wav");
			pianoa->nota[17] = loadSound("./media/sounds/Piano/p-mayus.wav");
			pianoa->nota[18] = loadSound("./media/sounds/Piano/a.wav");
			pianoa->nota[19] = loadSound("./media/sounds/Piano/s.wav");
			pianoa->nota[20] = loadSound("./media/sounds/Piano/s-mayus.wav");
			pianoa->nota[21] = loadSound("./media/sounds/Piano/d.wav");
			pianoa->nota[22] = loadSound("./media/sounds/Piano/d-mayus.wav");
			pianoa->nota[23] = loadSound("./media/sounds/Piano/f.wav");
			pianoa->nota[24] = loadSound("./media/sounds/Piano/g.wav");
			pianoa->nota[25] = loadSound("./media/sounds/Piano/g-mayus.wav");
			pianoa->nota[26] = loadSound("./media/sounds/Piano/h.wav");
			pianoa->nota[27] = loadSound("./media/sounds/Piano/h-mayus.wav");
			pianoa->nota[28] = loadSound("./media/sounds/Piano/j.wav");
			pianoa->nota[29] = loadSound("./media/sounds/Piano/j-mayus.wav");
			pianoa->nota[30] = loadSound("./media/sounds/Piano/k.wav");
			pianoa->nota[31] = loadSound("./media/sounds/Piano/l.wav");
			pianoa->nota[32] = loadSound("./media/sounds/Piano/l-mayus.wav");
			pianoa->nota[33] = loadSound("./media/sounds/Piano/z.wav");
			pianoa->nota[34] = loadSound("./media/sounds/Piano/z-mayus.wav");
			pianoa->nota[35] = loadSound("./media/sounds/Piano/x.wav");
			pianoa->nota[36] = loadSound("./media/sounds/Piano/c.wav");
			pianoa->nota[37] = loadSound("./media/sounds/Piano/c-mayus.wav");
			pianoa->nota[38] = loadSound("./media/sounds/Piano/v.wav");
			pianoa->nota[39] = loadSound("./media/sounds/Piano/v-mayus.wav");
			pianoa->nota[40] = loadSound("./media/sounds/Piano/b.wav");
			pianoa->nota[41] = loadSound("./media/sounds/Piano/b-mayus.wav");
			pianoa->nota[42] = loadSound("./media/sounds/Piano/n.wav");
			pianoa->nota[43] = loadSound("./media/sounds/Piano/m.wav");
			pianoa->nota[44] = loadSound("./media/sounds/Piano/1.wav");
			pianoa->nota[45] = loadSound("./media/sounds/Piano/1-mayus.wav");
			pianoa->nota[46] = loadSound("./media/sounds/Piano/2.wav");
			pianoa->nota[47] = loadSound("./media/sounds/Piano/2-mayus.wav");
			pianoa->nota[48] = loadSound("./media/sounds/Piano/3.wav");
			pianoa->nota[49] = loadSound("./media/sounds/Piano/4.wav");
			pianoa->nota[50] = loadSound("./media/sounds/Piano/4-mayus.wav");
			pianoa->nota[51] = loadSound("./media/sounds/Piano/5.wav");
			pianoa->nota[52] = loadSound("./media/sounds/Piano/5-mayus.wav");
			pianoa->nota[53] = loadSound("./media/sounds/Piano/6.wav");
			pianoa->nota[54] = loadSound("./media/sounds/Piano/6-mayus.wav");
			pianoa->nota[55] = loadSound("./media/sounds/Piano/7.wav");
			pianoa->nota[56] = loadSound("./media/sounds/Piano/8.wav");
			pianoa->nota[57] = loadSound("./media/sounds/Piano/8-mayus.wav");
			pianoa->nota[58] = loadSound("./media/sounds/Piano/9.wav");
			pianoa->nota[59] = loadSound("./media/sounds/Piano/9-mayus.wav");
			pianoa->nota[60] = loadSound("./media/sounds/Piano/0.wav");
			break;
		case 2:
			pianoa->nota[0] = loadSound("./media/sounds/Drums/q.wav");
			pianoa->nota[1] = loadSound(NULL);
			pianoa->nota[2] = loadSound("./media/sounds/Drums/w.wav");
			pianoa->nota[3] = loadSound(NULL);
			pianoa->nota[4] = loadSound("./media/sounds/Drums/e.wav");
			pianoa->nota[5] = loadSound(NULL);
			pianoa->nota[6] = loadSound("./media/sounds/Drums/r.wav");
			pianoa->nota[7] = loadSound("./media/sounds/Drums/t.wav");
			pianoa->nota[8] = loadSound(NULL);
			pianoa->nota[9] = loadSound("./media/sounds/Drums/y.wav");
			pianoa->nota[10] = loadSound(NULL);
			pianoa->nota[11] = loadSound("./media/sounds/Drums/u.wav");
			pianoa->nota[12] = loadSound("./media/sounds/Drums/i.wav");
			pianoa->nota[13] = loadSound(NULL);
			pianoa->nota[14] = loadSound("./media/sounds/Drums/o.wav");
			pianoa->nota[15] = loadSound(NULL);
			pianoa->nota[16] = loadSound("./media/sounds/Drums/p.wav");
			pianoa->nota[17] = loadSound(NULL);
			pianoa->nota[18] = loadSound("./media/sounds/Drums/a.wav");
			pianoa->nota[19] = loadSound("./media/sounds/Drums/s.wav");
			pianoa->nota[20] = loadSound(NULL);
			pianoa->nota[21] = loadSound("./media/sounds/Drums/d.wav");
			pianoa->nota[22] = loadSound(NULL);
			pianoa->nota[23] = loadSound("./media/sounds/Drums/f.wav");
			pianoa->nota[24] = loadSound("./media/sounds/Drums/g.wav");
			pianoa->nota[25] = loadSound(NULL);
			pianoa->nota[26] = loadSound("./media/sounds/Drums/h.wav");
			pianoa->nota[27] = loadSound(NULL);
			pianoa->nota[28] = loadSound("./media/sounds/Drums/j.wav");
			pianoa->nota[29] = loadSound(NULL);
			pianoa->nota[30] = loadSound("./media/sounds/Drums/k.wav");
			pianoa->nota[31] = loadSound("./media/sounds/Drums/l.wav");
			pianoa->nota[32] = loadSound(NULL);
			pianoa->nota[33] = loadSound("././media/sounds/Drums/z.wav");
			pianoa->nota[34] = loadSound(NULL);
			pianoa->nota[35] = loadSound("./media/sounds/Drums/x.wav");
			pianoa->nota[36] = loadSound("./media/sounds/Drums/c.wav");
			pianoa->nota[37] = loadSound(NULL);
			pianoa->nota[38] = loadSound("./media/sounds/Drums/v.wav");
			pianoa->nota[39] = loadSound(NULL);
			pianoa->nota[40] = loadSound("./media/sounds/Drums/b.wav");
			pianoa->nota[41] = loadSound(NULL);
			pianoa->nota[42] = loadSound("./media/sounds/Drums/n.wav");
			pianoa->nota[43] = loadSound("./media/sounds/Drums/m.wav");
			pianoa->nota[44] = loadSound("./media/sounds/Drums/1.wav");
			pianoa->nota[45] = loadSound(NULL);
			pianoa->nota[46] = loadSound("./media/sounds/Drums/2.wav");
			pianoa->nota[47] = loadSound(NULL);
			pianoa->nota[48] = loadSound("./media/sounds/Drums/3.wav");
			pianoa->nota[49] = loadSound("./media/sounds/Drums/4.wav");
			pianoa->nota[50] = loadSound(NULL);
			pianoa->nota[51] = loadSound("./media/sounds/Drums/5.wav");
			pianoa->nota[52] = loadSound(NULL);
			pianoa->nota[53] = loadSound("./media/sounds/Drums/6.wav");
			pianoa->nota[54] = loadSound(NULL);
			pianoa->nota[55] = loadSound("./media/sounds/Drums/7.wav");
			pianoa->nota[56] = loadSound("./media/sounds/Drums/8.wav");
			pianoa->nota[57] = loadSound(NULL);
			pianoa->nota[58] = loadSound("./media/sounds/Drums/9.wav");
			pianoa->nota[59] = loadSound(NULL);
			pianoa->nota[60] = loadSound("./media/sounds/Drums/0.wav");
			break;
		case 3:
			pianoa->nota[0] = loadSound("./media/sounds/Saxofon/A3.wav");
			pianoa->nota[1] = loadSound("./media/sounds/Saxofon/A4.wav");
			pianoa->nota[2] = loadSound("./media/sounds/Saxofon/A5.wav");
			pianoa->nota[3] = loadSound("./media/sounds/Saxofon/As.wav");
			pianoa->nota[4] = loadSound("./media/sounds/Saxofon/As3.wav");
			pianoa->nota[5] = loadSound("./media/sounds/Saxofon/As4.wav");
			pianoa->nota[6] = loadSound("./media/sounds/Saxofon/B3.wav");
			pianoa->nota[7] = loadSound("./media/sounds/Saxofon/B4.wav");
			pianoa->nota[8] = loadSound("./media/sounds/Saxofon/B5.wav");
			pianoa->nota[9] = loadSound("./media/sounds/Saxofon/C4.wav");
			pianoa->nota[10] = loadSound("./media/sounds/Saxofon/C5.wav");
			pianoa->nota[11] = loadSound("./media/sounds/Saxofon/C6.wav");
			pianoa->nota[12] = loadSound("./media/sounds/Saxofon/Cs4.wav");
			pianoa->nota[13] = loadSound("./media/sounds/Saxofon/Cs5.wav");
			pianoa->nota[14] = loadSound("./media/sounds/Saxofon/Cs6.wav");
			pianoa->nota[15] = loadSound("./media/sounds/Saxofon/D4.wav");
			pianoa->nota[16] = loadSound("./media/sounds/Saxofon/D5.wav");
			pianoa->nota[17] = loadSound("./media/sounds/Saxofon/D6.wav");
			pianoa->nota[18] = loadSound("./media/sounds/Saxofon/Ds3.wav");
			pianoa->nota[19] = loadSound("./media/sounds/Saxofon/Ds4.wav");
			pianoa->nota[20] = loadSound("./media/sounds/Saxofon/Ds5.wav");
			pianoa->nota[21] = loadSound("./media/sounds/Saxofon/Ds6.wav");
			pianoa->nota[22] = loadSound("./media/sounds/Saxofon/E3.wav");
			pianoa->nota[23] = loadSound("./media/sounds/Saxofon/E4.wav");
			pianoa->nota[24] = loadSound("./media/sounds/Saxofon/E5.wav");
			pianoa->nota[25] = loadSound("./media/sounds/Saxofon/E6.wav");
			pianoa->nota[26] = loadSound("./media/sounds/Saxofon/F3.wav");
			pianoa->nota[27] = loadSound("./media/sounds/Saxofon/F4.wav");
			pianoa->nota[28] = loadSound("./media/sounds/Saxofon/F5.wav");
			pianoa->nota[29] = loadSound("./media/sounds/Saxofon/F6.wav");
			pianoa->nota[30] = loadSound("./media/sounds/Saxofon/Fs3.wav");
			pianoa->nota[31] = loadSound("./media/sounds/Saxofon/Fs4.wav");
			pianoa->nota[32] = loadSound("./media/sounds/Saxofon/Fs5.wav");
			pianoa->nota[33] = loadSound("./media/sounds/Saxofon/G3.wav");
			pianoa->nota[34] = loadSound("./media/sounds/Saxofon/G4.wav");
			pianoa->nota[35] = loadSound("./media/sounds/Saxofon/G5.wav");
			pianoa->nota[36] = loadSound("./media/sounds/Saxofon/G6.wav");
			pianoa->nota[37] = loadSound("./media/sounds/Saxofon/Gs4.wav");
			pianoa->nota[38] = loadSound("./media/sounds/Saxofon/Gs5.wav");
			pianoa->nota[39] = loadSound(NULL);
			pianoa->nota[40] = loadSound(NULL);
			pianoa->nota[41] = loadSound(NULL);
			pianoa->nota[42] = loadSound(NULL);
			pianoa->nota[43] = loadSound(NULL);
			pianoa->nota[44] = loadSound(NULL);
			pianoa->nota[45] = loadSound(NULL);
			pianoa->nota[46] = loadSound(NULL);
			pianoa->nota[47] = loadSound(NULL);
			pianoa->nota[48] = loadSound(NULL);
			pianoa->nota[49] = loadSound(NULL);
			pianoa->nota[50] = loadSound(NULL);
			pianoa->nota[51] = loadSound(NULL);
			pianoa->nota[52] = loadSound(NULL);
			pianoa->nota[53] = loadSound(NULL);
			pianoa->nota[54] = loadSound(NULL);
			pianoa->nota[55] = loadSound(NULL);
			pianoa->nota[56] = loadSound(NULL);
			pianoa->nota[57] = loadSound(NULL);
			pianoa->nota[58] = loadSound(NULL);
			pianoa->nota[59] = loadSound(NULL);
			pianoa->nota[60] = loadSound(NULL);
			break;
		case 4:
			pianoa->nota[0] = loadSound("./media/sounds/8bit/q.wav");
			pianoa->nota[1] = loadSound("./media/sounds/8bit/q-mayus.wav");
			pianoa->nota[2] = loadSound("./media/sounds/8bit/w.wav");
			pianoa->nota[3] = loadSound("./media/sounds/8bit/w-mayus.wav");
			pianoa->nota[4] = loadSound("./media/sounds/8bit/e.wav");
			pianoa->nota[5] = loadSound("./media/sounds/8bit/e-mayus.wav");
			pianoa->nota[6] = loadSound("./media/sounds/8bit/r.wav");
			pianoa->nota[7] = loadSound("./media/sounds/8bit/t.wav");
			pianoa->nota[8] = loadSound("./media/sounds/8bit/t-mayus.wav");
			pianoa->nota[9] = loadSound("./media/sounds/8bit/y.wav");
			pianoa->nota[10] = loadSound("./media/sounds/8bit/y-mayus.wav");
			pianoa->nota[11] = loadSound("./media/sounds/8bit/u.wav");
			pianoa->nota[12] = loadSound("./media/sounds/8bit/i.wav");
			pianoa->nota[13] = loadSound("./media/sounds/8bit/i-mayus.wav");
			pianoa->nota[14] = loadSound("./media/sounds/8bit/o.wav");
			pianoa->nota[15] = loadSound("./media/sounds/8bit/o-mayus.wav");
			pianoa->nota[16] = loadSound("./media/sounds/8bit/p.wav");
			pianoa->nota[17] = loadSound("./media/sounds/8bit/p-mayus.wav");
			pianoa->nota[18] = loadSound("./media/sounds/8bit/a.wav");
			pianoa->nota[19] = loadSound("./media/sounds/8bit/s.wav");
			pianoa->nota[20] = loadSound("./media/sounds/8bit/s-mayus.wav");
			pianoa->nota[21] = loadSound("./media/sounds/8bit/d.wav");
			pianoa->nota[22] = loadSound("./media/sounds/8bit/d-mayus.wav");
			pianoa->nota[23] = loadSound("./media/sounds/8bit/f.wav");
			pianoa->nota[24] = loadSound("./media/sounds/8bit/g.wav");
			pianoa->nota[25] = loadSound("./media/sounds/8bit/g-mayus.wav");
			pianoa->nota[26] = loadSound("./media/sounds/8bit/h.wav");
			pianoa->nota[27] = loadSound("./media/sounds/8bit/h-mayus.wav");
			pianoa->nota[28] = loadSound("./media/sounds/8bit/j.wav");
			pianoa->nota[29] = loadSound("./media/sounds/8bit/j-mayus.wav");
			pianoa->nota[30] = loadSound("./media/sounds/8bit/k.wav");
			pianoa->nota[31] = loadSound("./media/sounds/8bit/l.wav");
			pianoa->nota[32] = loadSound("./media/sounds/8bit/l-mayus.wav");
			pianoa->nota[33] = loadSound("./media/sounds/8bit/z.wav");
			pianoa->nota[34] = loadSound("./media/sounds/8bit/z-mayus.wav");
			pianoa->nota[35] = loadSound("./media/sounds/8bit/x.wav");
			pianoa->nota[36] = loadSound("./media/sounds/8bit/c.wav");
			pianoa->nota[37] = loadSound("./media/sounds/8bit/c-mayus.wav");
			pianoa->nota[38] = loadSound("./media/sounds/8bit/v.wav");
			pianoa->nota[39] = loadSound("./media/sounds/8bit/v-mayus.wav");
			pianoa->nota[40] = loadSound("./media/sounds/8bit/b.wav");
			pianoa->nota[41] = loadSound("./media/sounds/8bit/b-mayus.wav");
			pianoa->nota[42] = loadSound("./media/sounds/8bit/n.wav");
			pianoa->nota[43] = loadSound("./media/sounds/8bit/m.wav");
			pianoa->nota[44] = loadSound("./media/sounds/8bit/1.wav");
			pianoa->nota[45] = loadSound("./media/sounds/8bit/1-mayus.wav");
			pianoa->nota[46] = loadSound("./media/sounds/8bit/2.wav");
			pianoa->nota[47] = loadSound("./media/sounds/8bit/2-mayus.wav");
			pianoa->nota[48] = loadSound("./media/sounds/8bit/3.wav");
			pianoa->nota[49] = loadSound("./media/sounds/8bit/4.wav");
			pianoa->nota[50] = loadSound("./media/sounds/8bit/4-mayus.wav");
			pianoa->nota[51] = loadSound("./media/sounds/8bit/5.wav");
			pianoa->nota[52] = loadSound("./media/sounds/8bit/5-mayus.wav");
			pianoa->nota[53] = loadSound("./media/sounds/8bit/6.wav");
			pianoa->nota[54] = loadSound("./media/sounds/8bit/6-mayus.wav");
			pianoa->nota[55] = loadSound("./media/sounds/8bit/7.wav");
			pianoa->nota[56] = loadSound("./media/sounds/8bit/8.wav");
			pianoa->nota[57] = loadSound("./media/sounds/8bit/8-mayus.wav");
			pianoa->nota[58] = loadSound("./media/sounds/8bit/9.wav");
			pianoa->nota[59] = loadSound("./media/sounds/8bit/9-mayus.wav");
			pianoa->nota[60] = loadSound("./media/sounds/8bit/0.wav");
			break;
	}
}
