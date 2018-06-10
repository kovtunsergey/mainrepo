void input_mat_fi(FILE *tf, int(*mass)[4])
{
	tf = fopen("io.dat","wb");
	for(int i = 0; i < 4; i++)
	{
		st.mas[0] = mass[i][0];
		st.mas[1] = mass[i][1];
		st.mas[2] = mass[i][2];
		st.mas[3] = mass[i][3];
		fwrite(&st,sizeof(st),1,tf);
 	}
 	fclose(tf);
 }
