void read_mat_fi(FILE *tf, int (*mass)[4])
{
	int i;
	tf = fopen("io.dat","rb");
	i = 0;
	fread(&st, sizeof(st),1,tf);
	while(!feof(tf))
	{
		mass[i][0] = st.mas[0];
		mass[i][1] = st.mas[1];
		mass[i][2] = st.mas[2];
		mass[i][3] = st.mas[3];
		fread(&st,sizeof(st),1,tf);
		i++;
	}
}
