
#ifndef __MUSIC_H__
#define __MUSIC_H__
//*****************************Music******************************************************
//LEMIN 
unsigned char code Music_Girl[]={ 1,3, 2,3, 3,2, 1,3, 16,2 ,2,2,
					 			  17,2, 15,3, 13,2, 17,2, 
								  16,2, 15,3, 11,2, 15,3, 13,3,
								 
								   12,3, 13,3, 14,2, 1,2, 17,2, 1,3,
								   15,2, 14,2, 13,3, 14,4, 14,2, 

								   1,2, 17,3, 16,3, 15,2,

								   1,3, 2,3, 3,2, 1,3, 16,2, 2,2 ,
								   17,2, 15,3, 13,2, 17,2, 16,2, 15,3, 11,2, 15,2,
								   13,2,

								   12,3, 13,3, 14,2, 15,2, 14,2, 15,3, 13,2, 15,2, 1,2, 3,2, 
								   2,2, 2,3, 2,3, 1,2, 1,3, 1,2,
                                  0,0};
//���֮��
const unsigned char code Music_Same[]={ 16,3,17,3,1,3,17,3,1,2,3,2,17,2,
										
										13,3,13,3,16,3,15,3,16,2,1,2,15,2,
										13,3,13,3,14,3,13,3,14,3,1,3,13,2,
										1,3,1,3,1,3,17,3,14,3,14,3,17,3,17,3,
										0,0	 };
//��ֻ����                                  
const unsigned char code Music_Two[] ={ 0x17,0x03, 0x16,0x03, 0x17,0x01, 0x16,0x03, 0x17,0x03,
                                  0x16,0x03, 0x15,0x01, 0x10,0x03, 0x15,0x03, 0x16,0x02,
                                  0x16,0x0D, 0x17,0x03, 0x16,0x03, 0x15,0x03, 0x10,0x03,
                                  0x10,0x0E, 0x15,0x04, 0x0F,0x01, 0x17,0x03, 0x16,0x03,
                                  0x17,0x01, 0x16,0x03, 0x17,0x03, 0x16,0x03, 0x15,0x01,
                                  0x10,0x03, 0x15,0x03, 0x16,0x02, 0x16,0x0D, 0x17,0x03,
                                  0x16,0x03, 0x15,0x03, 0x10,0x03, 0x15,0x03, 0x16,0x01,
                                  0x17,0x03, 0x16,0x03, 0x17,0x01, 0x16,0x03, 0x17,0x03,
                                  0x16,0x03, 0x15,0x01, 0x10,0x03, 0x15,0x03, 0x16,0x02,
                                  0x16,0x0D, 0x17,0x03, 0x16,0x03, 0x15,0x03, 0x10,0x03,
                                  0x10,0x0E, 0x15,0x04, 0x0F,0x01, 0x17,0x03, 0x19,0x03,
                                  0x19,0x01, 0x19,0x03, 0x1A,0x03, 0x19,0x03, 0x17,0x01,
                                  0x16,0x03, 0x16,0x03, 0x16,0x02, 0x16,0x0D, 0x17,0x03,
                                  0x16,0x03, 0x15,0x03, 0x10,0x03, 0x10,0x0D, 0x15,0x00,
                                  0x19,0x03, 0x19,0x03, 0x1A,0x03, 0x1F,0x03, 0x1B,0x03,
                                  0x1B,0x03, 0x1A,0x03, 0x17,0x0D, 0x16,0x03, 0x16,0x03,
                                  0x16,0x0D, 0x17,0x01, 0x17,0x03, 0x17,0x03, 0x19,0x03,
                                  0x1A,0x02, 0x1A,0x02, 0x10,0x03, 0x17,0x0D, 0x16,0x03,
                                  0x16,0x01, 0x17,0x03, 0x19,0x03, 0x19,0x03, 0x17,0x03,
                                  0x19,0x02, 0x1F,0x02, 0x1B,0x03, 0x1A,0x03, 0x1A,0x0E,
                                  0x1B,0x04, 0x17,0x02, 0x1A,0x03, 0x1A,0x03, 0x1A,0x0E,
                                  0x1B,0x04, 0x1A,0x03, 0x19,0x03, 0x17,0x03, 0x16,0x03,
                                  0x17,0x0D, 0x16,0x03, 0x17,0x03, 0x19,0x01, 0x19,0x03,
                                  0x19,0x03, 0x1A,0x03, 0x1F,0x03, 0x1B,0x03, 0x1B,0x03,
                                  0x1A,0x03, 0x17,0x0D, 0x16,0x03, 0x16,0x03, 0x16,0x03,
                                  0x17,0x01, 0x17,0x03, 0x17,0x03, 0x19,0x03, 0x1A,0x02,
                                  0x1A,0x02, 0x10,0x03, 0x17,0x0D, 0x16,0x03, 0x16,0x01,
                                  0x17,0x03, 0x19,0x03, 0x19,0x03, 0x17,0x03, 0x19,0x03,
                                  0x1F,0x02, 0x1B,0x03, 0x1A,0x03, 0x1A,0x0E, 0x1B,0x04,
                                  0x17,0x02, 0x1A,0x03, 0x1A,0x03, 0x1A,0x0E, 0x1B,0x04,
                                  0x17,0x16, 0x1A,0x03, 0x1A,0x03, 0x1A,0x0E, 0x1B,0x04,
                                  0x1A,0x03, 0x19,0x03, 0x17,0x03, 0x16,0x03, 0x0F,0x02,
                                  0x10,0x03, 0x15,0x00, 0x00,0x00 };

//��������																
const unsigned char code Music_Carmen[]={1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
																				17,0,
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 6,3, 17,32, 5,3, 13,3,
																				2,1, 1,31,
	
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
																				17,0,
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 6,3, 17,32, 5,3, 13,3,
																				2,1, 1,1,
																				
																				3,2, 6,2, 3,32, 2,32,
																				1,2, 17,3, 16,3, 17,32, 13,32,
																				16,2, 17,2, 1,32, 3,32,
																				5,2, 4,3, 5,3, 3,32, 13,32,
																				3,2, 6,2, 3,32, 2,32,
																				1,2, 17,3, 16,3, 17,32, 13,32,
																				16,2, 17,2, 1,32, 3,32,
																				5,2, 4,3, 5,3, 3,1,
																				
																				4,3, 4,3, 4,2, 5,3, 5,3, 5,2,
																				6,3, 6,3, 6,2, 4,3, 4,3, 4,2,
																				3,32, 17,32, 3,32, 4,32, 3,32, 17,32, 3,31,
																				4,3, 4,3, 4,2, 5,3, 5,3, 5,2,
																				6,3, 6,3, 6,2, 4,3, 4,3, 4,2,
																				17,0, 17,0, 17,0,
																				17,1, 17,2, 17,2,
																				
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
																				17,0,
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,33, 4,3, 3,3, 4,3, 5,33, 4,3, 3,3, 4,3,
																				5,33, 4,3, 3,3, 4,3, 5,33, 4,3, 3,3, 4,3,
																				
																				5,0, 5,1, 5,2, 5,2,
																				31,1, 1,31, 1,31, 1,31, 1,31, 1,102, 17,3,
																				
																				0,0};

																				
//��������																
const unsigned char code Music_CarmenB[]={16,32, 16,3, 16,3, 16,33, 13,3, 12,3, 13,3,
																				16,32, 16,3, 16,3, 16,33, 17,3, 1,3, 17,3,
																				16,32, 16,3, 16,3, 17,33, 16,3, 115,3, 16,3,
																				17,0,
																				6,32, 6,3, 6,3, 6,33, 3,3, 2,3, 3,3,
																				6,32, 6,3, 6,3, 6,33, 7,3, 31,3, 7,3,
																				6,32, 6,3, 6,3, 7,33, 6,3, 125,3, 6,3,
																				7,0,
																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
																				17,0,
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 6,3, 17,32, 5,3, 13,3,
																				2,1, 1,31,
	
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
																				17,0,
																				1,32, 1,3, 1,3, 1,33, 15,3, 14,3, 15,3,
																				1,32, 1,3, 1,3, 1,33, 2,3, 3,3, 2,3,
																				1,32, 1,3, 1,3, 2,33, 1,3, 17,3, 1,3,
																				2, 0,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 5,3, 5,33, 4,3, 3,3, 4,3,
																				5,32, 5,3, 6,3, 17,32, 5,3, 13,3,
																				2,1, 1,1,
																				
//																				13,
//																				4,32, 4,3, 4,3, 4,33, 1,3, 17,3, 1,3,
//																				4,32, 4,3, 4,3, 4,33, 5,3, 6,3, 5,3,
//																				4,32, 4,3, 4,3, 2,32, 2,3, 1,3,
//																				17,0,
																				0,0};																				
//�������ý�����
const unsigned char code Music_PC[]={126,1, 6,3, 126,3, 31,2,
																				25,1, 24,1,
																				122,1, 22,3, 122,3, 24,2,
																				21,0,
																				22,1, 23,3, 24,2, 25,3,
																				31,1, 24,1,
																				126,1, 126,3, 26,2, 25,3,
																				24,0,
																				0,0};
const unsigned char code Music_Paganini[]={6,132, 6,3, 6,3, 31,3, 7,3, 6,3,
																					33,132, 3,3, 3,3, 125,3, 124,3, 3,3,
																					6,132, 6,3, 6,3, 31,3, 7,3, 6,3,
																					33,1, 3,31,
																					6,132, 6,3, 6,3, 31,3, 7,3, 6,3,
																					33,132, 3,3, 3,3, 125,3, 124,3, 3,3,
																					6,132, 6,3, 6,3, 31,3, 7,3, 6,3,
																					33,1, 3,31,
																					36,132, 36,3, 36,3, 137,3, 36,3, 35,3,
																					34,132, 32,3, 32,3, 34,3, 33,3, 32,3,
																					35,132, 35,3, 35,3, 36,3, 35,3, 34,3,
																					33,132, 31,3, 31,3, 33,3, 32,3, 31,3,
																					34,132, 27,3, 27,3, 32,3, 31,3, 27,3,
																					33,132, 26,3, 26,3, 31,3, 27,3, 26,3,
																					24,132, 132,3, 23,3, 33,3, 32,3, 27,3,
																					26,1, 16,31,
																					0,0};

const unsigned char code Music_Home[]={124,3, 3,3, 2,3, 121,3, 17,3, 16,0,
																			17,3, 121,2, 3,1, 17,3, 121,2, 3,1, 
																			3,3, 124,102, 121,4, 16,4, 17,0, 
																			17,3, 121,2, 3,1, 17,3, 121,2, 3,1, 
																			3,3, 124,102, 121,4, 16,4, 17,0,
																			124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			121,3, 124,4, 125,4, 6,2, 125,4, 6,4, 131,2, 7,3, 6,3, 124,4, 125,101,
																			121,3, 124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			125,2, 124,4, 3,4, 121,4, 17,4, 16,1,
																			16,4, 124,3, 3,3, 124,3, 121,2, 16,3, 121,3, 17,013, 17,113, 121,4,
																			121,3, 124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			125,2, 124,4, 3,4, 121,4, 17,4, 16,1,
																			16,4, 124,3, 3,3, 2,3, 121,2, 17,3, 16,3, 17,1,
																			3,3, 2,3, 121,3, 17,103, 121,4, 17,3, 6,0,
	
																			124,3, 3,3, 2,3, 121,3, 17,3, 16,0,
																			17,3, 121,2, 3,1, 17,3, 121,2, 3,1, 
																			3,3, 124,102, 121,4, 16,4, 17,0, 
																			17,3, 121,2, 3,1, 17,3, 121,2, 3,1, 
																			3,3, 124,102, 121,4, 16,4, 17,0,
																			124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			121,3, 124,4, 125,4, 6,2, 125,4, 6,4, 131,2, 7,3, 6,3, 124,4, 125,101,
																			121,3, 124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			125,2, 124,4, 3,4, 121,4, 17,4, 16,1,
																			16,4, 124,3, 3,3, 124,3, 121,2, 16,3, 121,3, 17,013, 17,113, 121,4,
																			121,3, 124,3, 125,3, 6,2, 125,3, 6,2, 124,3, 125,3, 6,102, 125,3, 6,102,
																			125,2, 124,4, 3,4, 121,4, 17,4, 16,1,
																			16,4, 124,3, 3,3, 2,3, 121,2, 17,3, 16,3, 17,1,
																			3,3, 2,3, 121,3, 6,4, 3,4, 2,3, 111,3, 6,100,
																			
																			0,0};
//giegie
const unsigned char code Music_giegie[]={0};
//***********************************************************************************
#endif
	
	
	
	
	
	
	
	
	
	
	
	
	