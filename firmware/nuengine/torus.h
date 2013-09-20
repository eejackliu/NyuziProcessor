const int kNumTorusVertices = 64;
const float kTorusVertices[] = {
	0.000000000f, 0.6000000000f, 0.000000000f, 0.000000000f, 1.000000000f, 0.000000000f,
	0.000000000f, 0.5707106781f, 0.07071067812f, 0.000000000f, 0.7071067812f, 0.7071067812f,
	0.000000000f, 0.5000000000f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	0.000000000f, 0.4292893219f, 0.07071067812f, 0.000000000f, -0.7071067812f, 0.7071067812f,
	0.000000000f, 0.4000000000f, 1.224646799e-17f, 0.000000000f, -1.000000000f, 1.224646799e-16f,
	0.000000000f, 0.4292893219f, -0.07071067812f, 0.000000000f, -0.7071067812f, -0.7071067812f,
	0.000000000f, 0.5000000000f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	0.000000000f, 0.5707106781f, -0.07071067812f, 0.000000000f, 0.7071067812f, -0.7071067812f,
	0.4242640687f, 0.4242640687f, 0.000000000f, 0.7071067812f, 0.7071067812f, 0.000000000f,
	0.4035533906f, 0.4035533906f, 0.07071067812f, 0.5000000000f, 0.5000000000f, 0.7071067812f,
	0.3535533906f, 0.3535533906f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	0.3035533906f, 0.3035533906f, 0.07071067812f, -0.5000000000f, -0.5000000000f, 0.7071067812f,
	0.2828427125f, 0.2828427125f, 1.224646799e-17f, -0.7071067812f, -0.7071067812f, 1.224646799e-16f,
	0.3035533906f, 0.3035533906f, -0.07071067812f, -0.5000000000f, -0.5000000000f, -0.7071067812f,
	0.3535533906f, 0.3535533906f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	0.4035533906f, 0.4035533906f, -0.07071067812f, 0.5000000000f, 0.5000000000f, -0.7071067812f,
	0.6000000000f, 3.673940397e-17f, 0.000000000f, 1.000000000f, 6.123233996e-17f, 0.000000000f,
	0.5707106781f, 3.494595026e-17f, 0.07071067812f, 0.7071067812f, 4.329780281e-17f, 0.7071067812f,
	0.5000000000f, 3.061616998e-17f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	0.4292893219f, 2.628638970e-17f, 0.07071067812f, -0.7071067812f, -4.329780281e-17f, 0.7071067812f,
	0.4000000000f, 2.449293598e-17f, 1.224646799e-17f, -1.000000000f, -6.123233996e-17f, 1.224646799e-16f,
	0.4292893219f, 2.628638970e-17f, -0.07071067812f, -0.7071067812f, -4.329780281e-17f, -0.7071067812f,
	0.5000000000f, 3.061616998e-17f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	0.5707106781f, 3.494595026e-17f, -0.07071067812f, 0.7071067812f, 4.329780281e-17f, -0.7071067812f,
	0.4242640687f, -0.4242640687f, 0.000000000f, 0.7071067812f, -0.7071067812f, 0.000000000f,
	0.4035533906f, -0.4035533906f, 0.07071067812f, 0.5000000000f, -0.5000000000f, 0.7071067812f,
	0.3535533906f, -0.3535533906f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	0.3035533906f, -0.3035533906f, 0.07071067812f, -0.5000000000f, 0.5000000000f, 0.7071067812f,
	0.2828427125f, -0.2828427125f, 1.224646799e-17f, -0.7071067812f, 0.7071067812f, 1.224646799e-16f,
	0.3035533906f, -0.3035533906f, -0.07071067812f, -0.5000000000f, 0.5000000000f, -0.7071067812f,
	0.3535533906f, -0.3535533906f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	0.4035533906f, -0.4035533906f, -0.07071067812f, 0.5000000000f, -0.5000000000f, -0.7071067812f,
	7.347880795e-17f, -0.6000000000f, 0.000000000f, 1.224646799e-16f, -1.000000000f, 0.000000000f,
	6.989190052e-17f, -0.5707106781f, 0.07071067812f, 8.659560562e-17f, -0.7071067812f, 0.7071067812f,
	6.123233996e-17f, -0.5000000000f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	5.257277940e-17f, -0.4292893219f, 0.07071067812f, -8.659560562e-17f, 0.7071067812f, 0.7071067812f,
	4.898587197e-17f, -0.4000000000f, 1.224646799e-17f, -1.224646799e-16f, 1.000000000f, 1.224646799e-16f,
	5.257277940e-17f, -0.4292893219f, -0.07071067812f, -8.659560562e-17f, 0.7071067812f, -0.7071067812f,
	6.123233996e-17f, -0.5000000000f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	6.989190052e-17f, -0.5707106781f, -0.07071067812f, 8.659560562e-17f, -0.7071067812f, -0.7071067812f,
	-0.4242640687f, -0.4242640687f, 0.000000000f, -0.7071067812f, -0.7071067812f, 0.000000000f,
	-0.4035533906f, -0.4035533906f, 0.07071067812f, -0.5000000000f, -0.5000000000f, 0.7071067812f,
	-0.3535533906f, -0.3535533906f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	-0.3035533906f, -0.3035533906f, 0.07071067812f, 0.5000000000f, 0.5000000000f, 0.7071067812f,
	-0.2828427125f, -0.2828427125f, 1.224646799e-17f, 0.7071067812f, 0.7071067812f, 1.224646799e-16f,
	-0.3035533906f, -0.3035533906f, -0.07071067812f, 0.5000000000f, 0.5000000000f, -0.7071067812f,
	-0.3535533906f, -0.3535533906f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	-0.4035533906f, -0.4035533906f, -0.07071067812f, -0.5000000000f, -0.5000000000f, -0.7071067812f,
	-0.6000000000f, -1.102182119e-16f, 0.000000000f, -1.000000000f, -1.836970199e-16f, 0.000000000f,
	-0.5707106781f, -1.048378508e-16f, 0.07071067812f, -0.7071067812f, -1.298934084e-16f, 0.7071067812f,
	-0.5000000000f, -9.184850994e-17f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	-0.4292893219f, -7.885916909e-17f, 0.07071067812f, 0.7071067812f, 1.298934084e-16f, 0.7071067812f,
	-0.4000000000f, -7.347880795e-17f, 1.224646799e-17f, 1.000000000f, 1.836970199e-16f, 1.224646799e-16f,
	-0.4292893219f, -7.885916909e-17f, -0.07071067812f, 0.7071067812f, 1.298934084e-16f, -0.7071067812f,
	-0.5000000000f, -9.184850994e-17f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	-0.5707106781f, -1.048378508e-16f, -0.07071067812f, -0.7071067812f, -1.298934084e-16f, -0.7071067812f,
	-0.4242640687f, 0.4242640687f, 0.000000000f, -0.7071067812f, 0.7071067812f, 0.000000000f,
	-0.4035533906f, 0.4035533906f, 0.07071067812f, -0.5000000000f, 0.5000000000f, 0.7071067812f,
	-0.3535533906f, 0.3535533906f, 0.1000000000f, 0.000000000f, 0.000000000f, 1.000000000f,
	-0.3035533906f, 0.3035533906f, 0.07071067812f, 0.5000000000f, -0.5000000000f, 0.7071067812f,
	-0.2828427125f, 0.2828427125f, 1.224646799e-17f, 0.7071067812f, -0.7071067812f, 1.224646799e-16f,
	-0.3035533906f, 0.3035533906f, -0.07071067812f, 0.5000000000f, -0.5000000000f, -0.7071067812f,
	-0.3535533906f, 0.3535533906f, -0.1000000000f, 0.000000000f, 0.000000000f, -1.000000000f,
	-0.4035533906f, 0.4035533906f, -0.07071067812f, -0.5000000000f, 0.5000000000f, -0.7071067812f,
};
const int kNumTorusIndices = 384;
const int kTorusIndices[] = {
	0, 1, 9,
	9, 8, 0,
	1, 2, 10,
	10, 9, 1,
	2, 3, 11,
	11, 10, 2,
	3, 4, 12,
	12, 11, 3,
	4, 5, 13,
	13, 12, 4,
	5, 6, 14,
	14, 13, 5,
	6, 7, 15,
	15, 14, 6,
	7, 0, 8,
	8, 15, 7,
	8, 9, 17,
	17, 16, 8,
	9, 10, 18,
	18, 17, 9,
	10, 11, 19,
	19, 18, 10,
	11, 12, 20,
	20, 19, 11,
	12, 13, 21,
	21, 20, 12,
	13, 14, 22,
	22, 21, 13,
	14, 15, 23,
	23, 22, 14,
	15, 8, 16,
	16, 23, 15,
	16, 17, 25,
	25, 24, 16,
	17, 18, 26,
	26, 25, 17,
	18, 19, 27,
	27, 26, 18,
	19, 20, 28,
	28, 27, 19,
	20, 21, 29,
	29, 28, 20,
	21, 22, 30,
	30, 29, 21,
	22, 23, 31,
	31, 30, 22,
	23, 16, 24,
	24, 31, 23,
	24, 25, 33,
	33, 32, 24,
	25, 26, 34,
	34, 33, 25,
	26, 27, 35,
	35, 34, 26,
	27, 28, 36,
	36, 35, 27,
	28, 29, 37,
	37, 36, 28,
	29, 30, 38,
	38, 37, 29,
	30, 31, 39,
	39, 38, 30,
	31, 24, 32,
	32, 39, 31,
	32, 33, 41,
	41, 40, 32,
	33, 34, 42,
	42, 41, 33,
	34, 35, 43,
	43, 42, 34,
	35, 36, 44,
	44, 43, 35,
	36, 37, 45,
	45, 44, 36,
	37, 38, 46,
	46, 45, 37,
	38, 39, 47,
	47, 46, 38,
	39, 32, 40,
	40, 47, 39,
	40, 41, 49,
	49, 48, 40,
	41, 42, 50,
	50, 49, 41,
	42, 43, 51,
	51, 50, 42,
	43, 44, 52,
	52, 51, 43,
	44, 45, 53,
	53, 52, 44,
	45, 46, 54,
	54, 53, 45,
	46, 47, 55,
	55, 54, 46,
	47, 40, 48,
	48, 55, 47,
	48, 49, 57,
	57, 56, 48,
	49, 50, 58,
	58, 57, 49,
	50, 51, 59,
	59, 58, 50,
	51, 52, 60,
	60, 59, 51,
	52, 53, 61,
	61, 60, 52,
	53, 54, 62,
	62, 61, 53,
	54, 55, 63,
	63, 62, 54,
	55, 48, 56,
	56, 63, 55,
	56, 57, 1,
	1, 0, 56,
	57, 58, 2,
	2, 1, 57,
	58, 59, 3,
	3, 2, 58,
	59, 60, 4,
	4, 3, 59,
	60, 61, 5,
	5, 4, 60,
	61, 62, 6,
	6, 5, 61,
	62, 63, 7,
	7, 6, 62,
	63, 56, 0,
	0, 7, 63,
};
