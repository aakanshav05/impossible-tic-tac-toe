#include <stdio.h>

int i , j ,n;
int a[3][3];
   void print()
   {
   	for(int k=0 ; k<3 ; k++)
   	{
   		for(int l = 0 ; l<3 ; l++)
   		{
   			printf("%c\t\t",(char)a[k][l]);
		   } printf("\n\n");
	   }
   }


	
	void enter()



		{printf("enter the index! first enter the row(left number)then the column(right number)\n");
	     scanf("%d",&i);
	     scanf("%d",&j);
	     printf("enter the index as one number!(example 00 , 01 etc.)");
	     scanf("%d",&n);
			a[i][j]=88;
			for(int k = 0; k<3;k++)
			{
				for(int l =0 ; l<3 ; l++)
				{   printf("%c\t\t", (char)a[k][l]);
				}
				printf("\n\n");
} printf("\n");
				
		} 
		
		void cases()
		{
			switch(n)
			{
				case 00:
				{
						a[1][1]=79;
					print();
					enter();
					switch(n)
					{   
						case 01:
						{
						a[0][2]=79;
						print();
						enter();
						switch(n)
						
						{
							case 10:
							case 12:
							case 21:
						    case 22:
								{
								a[2][0]=79;
								print();
								printf("computer wins");
								break;	}
							case 20:
								a[1][0]=79;
								print();
								enter();
								switch(n)
							
								{case 21:
								case 22:
								case 12:
								{
										a[2][1]=79;
									print();
									enter();}
									switch(n)
									case 22:
										printf("tie");
									}
						 }
						 break;
						 
						  
					}
					case 10:
						{a[2][0]=79;
						print();
						enter();
						switch(n)
						{
							case 01:
						    case 12:
						    case 21:
						    case 22:
								{a[0][2]=79;
								print();
								printf("computer wins");
								break;
								}
								case 02:
								{a[0][1]=79;
								print();
								enter();
								switch(n)
								{case 12:
									case 22:
										{a[2][1]=79;
											print();
											printf("computer wins");
										break;}
										case 21:
											{
												a[1][2]=79;
												print();
												enter();
												printf("tie");
												break;
											}
										
									
								}
								
									
								
						}
							
						} break;
					
					
					
			}
			case 02:
				{
					a[0][1]=79;
					print();
					enter();
					switch(n)
					{
						case 10:
							case 12:
								case 20:
									case 22:
										{ a[2][1]=79;
										print();
										printf("computer wins");
										break;
											}
											case 21:
											{	a[1][0]=79;
											   print();
											   enter();
											   switch(n)
											   {
											   	case 20:
											   		case 22:
											   		{	a[1][2]=79;
											   		     print();
											   		     printf("computer wins");
											   		     break;
											   		 }
											   		 
											   		 case 12:
											   		 	{a[2][2]=79;
											   		 	print();
											   		 	enter();
											   		 	print();
											   		 	printf("tie");
											   		 	break;
											   		 		
															}
											   			
											   }
												
					}
				}
			break;	}
		case 20:
		{
				a[1][0]=79;
			print();
			enter();
			switch(n)
			{case 21:
				case 22:
					case 02:
						case 01:
							{a[1][2]=79;
							print();
							printf("computer wins");
							break;	
							}
							case 12:
								{a[0][1]=79;
								print();
								enter();
								switch(n)
								{case 22:
									case 02:
										{a[2][1]=79;
										print();
										printf("computer wins");
										break;
										}
										case 21:
											{a[2][2]=79;
											print();
											enter();
											printf("tie");
											break;
											}
									
								}
									
								}
				
			}break;
		}
		
		case 21:
			{
				a[2][0]=79;
				print();
				enter();
				switch(n)
				{
					case 01:
						case 10:
							case 12:
								case 22:
									{
										a[0][2]=79;
										print();
										printf("computer wins");
										break;
									}
									case 02:
										a[0][1]=79;
										print();
										enter();
										switch(n)
										{
											case 10:
												case 22:
													{a[1][2]=79;
													print();
													enter();
													printf("tie");
													break;
													}
													case 12:
														a[2][2]=79;
														print();
														enter();
														printf("tie");
														break;
										}
									}break;
				}
				
			case 22:
			{
					a[0][1]=79;
				print();
				enter();
				switch(n)
				{
					case 02:
						case 10:
							case 12:
								case 20:
									{
										a[2][1]=79;
										print();
										printf("computer wins");
										break;
									}
									case 21:
										{
											a[2][0]=79;
											print();
											enter();
											switch(n)
											{
												case 10:
													case 12:
														{a[0][2]=79;
														print();
														printf("computer wins");
														break;
														}
														case 02:
															{
																a[1][2]=79;
																print();
																enter();
																print();
																printf("tie");
																break;
															}
											}
										}
				}break;
			}
		
		
		
		
		
		
		}break;}
		case 11:
			{
				a[2][0]=79;
				print();
				enter();
				switch(n)
				{
					case 02:
						{a[2][2]=79;
						print();
						enter();
						switch(n)
						{
							case 00:
								case 01:
									case 10:
										case 12:
											{
											a[2][1]=79;
											print();
											printf("computer wins");
											break;
										}
										case 21:
										{
												a[0][1]=79;
											print();
											enter();
											switch(n)
											{
											
											case 00:
												{a[1][0]=79;
												print();
												enter();
												printf("tie");
												break;
												}
												case 10:
													{a[1][2]=79;
													print();
													enter();
													printf("tie");
													break;}
													case 12:
													{a[1][0]=79;
													print();
													enter();
													printf("tie");
													break;}
											}break;
											}
											
											
											}break;
						}
						case 00:
							{
								a[2][2]=79;
								print();
								enter();
								switch(n)
								{
									case 01:
										case 02:
											case 10:
												case 12:
													{a[2][1]=79;
													print();
													printf("computer wins");
													break;
													}
													case 21:
														{a[0][1]=79;
														print();
														enter();
														switch(n)
														{
															case 02:
																{a[1][0]=79;
																print();
																enter();
																printf("tie");
																break;
																
																}	case 10:
																{a[1][2]=79;
																print();
																enter();
																printf("tie");
																break;
															}	case 12:
																{a[1][0]=79;
																print();
																enter();
																printf("tie");
																break;}
																
															
														}
														}
								}break;
							}
							case 01:
								{
									a[2][1]=79;
									print();
									enter();
									switch(n)
									{
										case 12:
											case 10:
												case 00:
													case 02:
														{
															a[2][2]=79;
															print();
															printf("computer wins");
															break;
														}
														case 22:
															{
																a[0][0]=79;
																print();
																enter();
																switch(n)
																{
																	case 02:
																		case 12:
																			{a[1][0]=79;
																			print();
																			printf("computer wins");
																			break;
																			}
																			case 10:
																				{a[1][2]=79;
																				print();
																				enter();
																				printf("tie");
																				break;
																				}
																}
															}
															
									}break;
								}
								case 10:
									{
										a[1][2]=79;
										print();
										enter();
										switch(n)
										{
											case 00:
												{a[2][2]=79;
												print();
												enter();
												switch(n)
												{
													case 01:
														case 21:
															{a[0][2]=79;
															print();
															printf("computer wins");
															break;
															}
															case 02:
																{a[0][1]=79;
																print();
																enter();
																printf("tie");
															break;	}
												}break;
												}
												case 01:
													a[2][1]=79;
												{
														print();
													enter();
													switch(n)
													{
														case 00:
															case 02:
																{a[2][2]=79;
																print();
																break;
																}
																case 22:
																	{a[0][0]=79;
																	print();
																	enter();
																	printf("tie");
																	break;
																	}
													}break;}
													
													case 02:
														{a[2][1]=79;
														print();
														enter();
														switch(n)
														{case 00:
															case 01:
																{a[2][2]=79;
																print();
																printf("computer wins");
																
																break;}
																case 22:
																	{a[0][0]=79;
																	print();
																	enter();
																	printf("tie");
																break;	
																	}
														}break;
														
														}
														case 21:
															{a[0][1]=79;
															print();
															enter();
															switch(n)
															{
																case 00:
																	{a[2][2]=79;
																	print();
																	enter();
																	printf("tie");
																	break;}
																	case 22:
																		{a[0][0]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																		case 02:
																		{a[2][2]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																		
															}break;
															}
															case 22:
																{a[0][0]=79;
																print();
																enter();
																switch(n)
																{
																	case 01:
																		{a[2][1]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																		case 02:
																		{a[0][1]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																		case 21:
																		{a[0][1]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																}break;
																}
													
										}break;
									}case 12:
										{
											a[1][0]=79;
											print();
											enter();
											switch(n)
											{
												case 21:
													case 02:
														case 01:
															case 22:
																{
																	a[0][0]=79;
																	print();
																	printf("computer wins");
																	break;
																}
																case 00:
																	{a[2][2]=79;
																	print();
																	enter();
																	switch(n)
																	{
																		case 01:
																			case 02:
																				{a[2][1]=79;
																				print();
																				printf("computer wins");
																				break;
																				}
																				case 21:
																					{a[0][1]=79;
																					print();
																					enter();
																					printf("tie");
																					break;
																					}
																	}
																	}
											}
									break;	}
									case 21:
										{
											a[0][1]=79;
											print();
											enter();
											switch(n)
											{
												case 00:
													{a[2][2]=79;
													print();
													enter();
													switch(n)
													{
														case 10:
															{a[1][2]=79;
															print();
															enter();
															printf("tie");
															break;
															}case 02:
															{a[1][0]=79;
															print();
															enter();
															printf("tie");
															break;
															}
															case 12:
															{a[1][0]=79;
															print();
															enter();
															printf("tie");
															break;
															}
															
													}break;
													}
													case 02:
														{
															a[1][0]=79;
															print();
															enter();
															switch(n)
															{
																case 00:
																	{a[2][2]=79;
																	print();
																	enter();
																	printf("tie");
																	break;
																	}
																case 22:
																case 12:
																	{a[0][0]=79;
																	print();
																printf("computer wins");
																break;
																	}
																	
																	
															}break;
														}
													case 10:
														{
															a[1][2]=79;
															print();
															enter();
															switch(n)
															{case 00:
																{a[2][2]=79;
																print();
																enter();
																printf("tie");
																break;
																}
															case 02:
																{a[0][0]=79;
																print();
																enter();
																printf("tie");
																break;
																}
															case 22:
																{a[0][0]=79;
																print();
																enter();
																printf("tie");
																break;
																}}break;
														}
														case 12:
															{
																a[1][0]=79;
																print();
																enter();
																switch(n)
																{
																	case 02:
																		case 22:
																			{a[0][0]=79;
																			print();
																			printf("computer wins");
																			break;
																			}
																		case 00:
																			{a[2][2]=79;
																			print();
																			enter();
																			printf("tie");
																			break;
																			}
																}break;
															}
															case 22:
																{a[0][0]=79;
																print();
																enter();
																switch(n)
																{
																	case 10:
																		case 12:
																			{a[0][2]=79;
																			print();
																			printf("computer wins");
																			break;
																			}
																			case 02:
																				{a[1][2]=79;
																				print();
																				enter();
																				printf("tie");
																				break;
																				}
																}break;

																}
														
										}break;
									
						
						}
						case 22:
							{a[0][0]=79;
							print();
							enter();
							switch(n)
							{
								case 01:
									case 02:
										case 12:
											case 21:
												{a[1][0]=79;
												print();
												printf("computer wins");
												break;
												}
												case 10:
													{a[1][2]=79;
													print();
													enter();
													switch(n)
													{
														case 01:
															{a[2][1]=79;
															print();
															enter();
															printf("tie");
															break;
															
													}case 02:
															{a[0][1]=79;
															print();
															enter();
															printf("tie");
															break;
															
													}
													case 21:
															{a[0][1]=79;
															print();
															enter();
															printf("tie");
															break;
															
													}
													
													
													}break;
							}
							}break;
				}
			}
		
		
	break;	}
		
		
		case 01:
			{a[1][1]=79;
			print();
			enter();
			switch(n)
			{
				case 02:
					{a[0][0]=79;
					print();
					enter();
					switch(n)
					{
						case 10:
							case 12:
								case 20:
									case 21:
										{a[2][2]=79;
										print();
										printf("computer wins");
										break;
										}
										case 22:
											{a[1][2]=79;
											print();
											enter();
											switch(n)
											{
												case 20:
													case 21:
														{a[1][0]=79;
														print();
														printf("computer wins");
														break;
														}
														case 10:
															{a[2][0]=79;
															print();
															enter();
															printf("tie");
															break;
															}
											}break;	}
					}break;
					}
					case 00:
						{a[0][2]=79;
						print();
						enter();
						switch(n)
						{case 10:
							case 12:
								case 21:
									case 22:
										{a[2][0]=79;
										print();
										printf("computer wins");
										break;
										}
							case 20:
								{a[1][0]=79;
								print();
								enter();
								switch(n)
								{case 21:
									case 22:
										{a[1][2]=79;
										print();
										printf("computer wins");
										break;
										}
										case 12:
											{a[2][1]=79;
											print();
											enter();
											printf("tie");
											break;
											}
								}break;
								}
						}break;
						}
						
						case 10:
							{a[0][2]=79;
							print();
							enter();
							switch(n)
							{
								case 00:
									case 12:
										case 21:
											case 22:
												{a[2][0]=79;
												print();
												printf("computer wins");
												break;
												}
												case 20:
													{a[0][0]=79;
													print();
													enter();
													switch(n)
													{case 12:
														case 21:
															{a[2][2]=79;
															print();
															printf("computer wins");
															break;
															}
															case 22:
																{a[2][1]=79;
																print();
																enter();
																printf("tie");
																break;
																}
													}break;
													}
																							}break;
							}
							case 12:
								{a[2][2]=79;
								print();
								enter();
								switch(n)
								{
									case 02:
										case 10:
											case 21:
												case 20:
													{a[0][0]=79;
													print();
													printf("computer wins");
													break;
													}
													case 00:
														{a[0][2]=79;
														print();
														enter();
														switch(n)
														{case 10:
															case 21:
																{a[2][0]=79;
																print();
																printf("computer wins");
																break;
																}
																case 20:
																	{a[1][0]=79;
																	print();
																	enter();
																	printf("tie");
																	break;
																	}
														}break;
														}
								}break;
								}
								case 20:
									{a[0][0]=79;
									print();
									enter();
									switch(n)
									{case 02:
										case 10:
											case 12:
												case 21:
													{a[2][2]=79;
													print();
													printf("computer wins");
													break;
													}
													case 22:
														{a[2][1]=79;
														print();
														enter();
														switch(n)
														{case 02:
															{a[1][2]=79;
															print();
															enter();
															printf("tie");
															break;
															}case 10:
															{a[0][2]=79;
															print();
															enter();
															printf("tie");
															break;
															}case 12:
															{a[0][2]=79;
															print();
															enter();
															printf("tie");
															break;
															}
																												}break;														}
									}break;
									}
									case 21:
										{a[2][0]=79;
										print();
										enter();
										switch(n)
										{case 00:
											case 10:
												case 12:
													case 22:
														{a[0][2]=79;
														print();
														printf("computer wins");
														break;
														}
														case 02:
															{a[0][0]=79;
															print();
															enter();
															switch(n)
															{
																case 10:
																	{a[2][2]=79;
																	print();
																	printf("computer wins");
																	break;
																	}
																	case 12:
																		case 22:
																			{a[1][0]=79;
																			print();
																			printf("computer wins");
																			break;
																			}
															}break;
															}
										}break;
										}
										case 22:
											{a[0][2]=79;
											print();
											enter();
											switch(n)
											{
												case 00:
													case 10:
														case 21:
															case 22:
																{a[2][0]=79;
																print();
																printf("computer wins");
																break;
																}
																case 20:
																	{a[2][1]=79;
																	print();
																	enter();
																	switch(n)
																	{case 00:
																		{a[1][0]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}case 10:
																		{a[0][0]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}case 12:
																		{a[0][0]=79;
																		print();
																		enter();
																		printf("tie");
																		break;
																		}
																	}break;
																	}
											}break;
											}
							}break;
			}
			case 10:
				{ a[1][1]=79;
				  print();
				  enter();
				  switch(n)
				  {
				  	case 00:
				  		{a[2][0]=79;
				  		print();
				  		enter();
				  		switch(n)
				  		{
				  			case 01:
				  				case 12:
				  					case 21:
				  						case 22:
				  							{a[0][2]=79;
				  							print();
				  							printf("computer wins");
				  							break;
											  }
											  case 02:
											  	{a[0][1]=79;
											  	print();
											  	enter();
											  	switch(n)
											  	{case 12:
											  		case 22:
											  			{a[2][1]=79;
											  			print();
											  			printf("computer wins");
														 break; }
														 case 21:
														 	a[1][2]=79;
														 	print();
														 	enter();
														 	printf("tie");
														 	break;
												  }
												 break; }
						  }break;
						  }
						  case 20:
						 {
						   a[0][0]=79;
						  print();
						  enter();
						  switch(n)
						  {
						  	case 01:
						  		case 02:
						  			case 12:
						  				case 21:
						  					{a[2][2]=79;
						  					print();
						  					printf("computer wins");
						  					break;
											  }
											  case 22:
											  	{a[2][1]=79;
											  	print();
											  	enter();
											  	switch(n)
											  	{case 02:
											  		case 12:
											  			{a[0][1]=79;
											  			print();
											  			printf("computer wins");
											  			break;
														  }
														  case 01:
														  	{a[0][2]=79;
														  	print();
														  	enter();
														  	printf("tie");
														  	break;
															  }
												  }break;
												  }
						   } break;}
						   case 01:
						   	{a[0][0]=79;
						   	print();
						   	enter();
						   	switch(n)
						   	{case 02:
						   		case 12:
						   			case 20:
						   				case 21:
						   					{a[2][2]=79;
						   					print();
						   					printf("computer wins");
						   					break;
											   }
											   case 22 :
											   	{a[0][2]=79;
											   	print();
											   	enter();
											   	switch(n)
											   	{case 12:
											   		case 21:
											   			{a[2][0]=79;
											   			print();
											   			printf("computer wins");
											   			break;
														   }
														   case 20:
														   	{	a[2][1]=79;
															   print();
															   enter();
															   printf("tie");
															   break;														   }
												   }
												   }
						   		
							   }break;
							   }
							   case 02:
							   	{a[0][0]=79;
							   	print();
							   	enter();
							   	switch(n)
							   	{
							   		case 01:
							   			case 12:
							   				case 20:
							   					case 21:
							   						{a[2][2]=79;
							   						print();
							   						printf("computer wins");
							   						break;
													   }
													   case 22:
													   	{a[1][2]=79;
													   	print();
													   	enter();
													   	switch(n)
													   	{case 20:
													   		case 01:
													   			{a[2][1]=79;
													   			print();
													   			enter();
													   			printf("tie");
													   			break;
																   }
																   case 21:
																   	{a[2][0]=79;
																   	print();
																   	enter();
																   	printf("tie");
																   	break;
																	   }
																   
														   }
														   break;}
								   }
								 break;  }
								 case 12:
								 	{a[0][1]=79;
								 	print();
								 	enter();
								 	switch(n)
								 	{
								 		case 00:
								 			case 02:
								 				case 20:
								 					case 22:
								 						{a[2][1]=79;
								 						print();
								 						printf("computer wins");
								 						break;
														 }
														 case 21:
														 	{a[2][0]=79;
														 	print();
														 	enter();
														 	switch(n)
														 	{case 00:
														 		case 22:
														 			{a[0][2]=79;
														 			print();
														 			printf("computer wins");
														 			break;
																	 }
																	 case 02:
																	 	{a[2][1]=79;
																	 	print();
																	 	enter();
																	 	printf("tie");
																	 	break;
																		 }
															 }
															 }
									 }break;
									 }
									 case 21:
									 	{a[2][0]=79;
									 	print();
									 	enter();
									 	switch(n)
									 	{
									 		case 00:
									 			case 01:
									 				case 12:
									 					case 22:
									 						{a[0][2]=79;
									 						print();
									 						printf("computer wins");
									 						break;
															 }
															 case 02:
															 	{a[0][0]=79;
															 	print();
															 	enter();
															 	switch(n)
															 	{ case 01:
															 		case 12:
															 			{a[2][2]=79;
															 			print();
															 			printf("computer wins");
															 			break;
																		 }
																		 case 22:
																		 	{a[1][2]=79;
																			 print();
																			 enter();
																			 printf("tie");
																			 break;	}break;																		 }
																 }
																 }break;
										 }
										 
										 case 22:
										 	{ a[2][0]=79;
										 	print();
										 	enter();
										 	switch(n)
										 	{
										 		case 00:
										 			case 01:
										 				case 12:
										 					case 21:
										 						{a[0][2]=79;
										 						print();
										 						printf("computer wins");
										 						break;
																 }
																 case 02:
																 	{a[1][2]=79;
																 	print();
																 	enter();
																 	switch(n)
																 	{
																 		case 00:
																 			{a[0][1]=79;
																 			print();
																 			enter();
																 			printf("tie");
																 			break;
																			 }case 01:
																 			{a[0][0]=79;
																 			print();
																 			enter();
																 			printf("tie");
																 			break;
																			 }case 21:
																 			{a[0][0]=79;
																 			print();
																 			enter();
																 			printf("tie");
																 			break;
																			 }
																			 
																	 }break;
																	 }
											 }break;
											 }
										 }break;
								 	
				  }
				  case 22:
				  	{a[1][1]=79;
				  	print();
				  	enter();
				  	switch(n)
				  	{
				  		case 01:
				  			{a[0][2]=79;
				  			print();
				  			enter();
				  			switch(n)
				  			{
				  				case 00:
				  					case 10:
				  						case 12:
				  							case 21:
				  								{a[2][0]=79;
				  								print();
				  								printf("computer wins");
				  								break;
												  }
												  case 20:
												  	{a[2][1]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 00:
												  			{a[1][0]=79;
												  			print();
												  			enter();
												  			printf("tie");
												  			break;
															  }
															  	case 10:
												  			{a[0][0]=79;
												  			print();
												  			enter();
												  			printf("tie");
												  			break;
															  }
															  	case 12:
												  			{a[0][0]=79;
												  			print();
												  			enter();
												  			printf("tie");
												  			break;
															  }
															  
													  }break;
													  }
							  }break;
							  }
							  case 10:
							  	{a[2][0]=79;
							  	print();
							  	enter();
							  	switch(n)
							  	{
							  		case 00:
							  			case 01:
							  				case 12:
							  					case 21:
							  						{a[0][2]=79;
							  						print();
							  						printf("computer wins");
							  						break;
													  }
													  case 02:
													  	{a[1][2]=79;
													  	print();
													  	enter();
													  	switch(n)
													  	{
													  		case 00:
													  			{a[0][1]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }case 01:
													  			{a[0][0]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }case 21:
													  			{a[0][0]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }
														  }
														break;  }
								  }break;
								  }case 21:
								  	{a[2][0]=79;
								  	print();
								  	enter();
								  	switch(n)
								  	{case 00:
								  		case 01:
								  			case 10:
								  				case 12:
								  					{a[0][2]=79;
								  					print();
								  					printf("computer wins");
								  					break;
													  }
													  case 02:
													  	{a[1][2]=79;
													  	print();
													  	enter();
													  	switch(n)
													  	{
													  		case 00:
													  			case 01:
													  				{a[1][0]=79;
													  				print();
													  				printf("computer wins");
													  				break;
																	  }
																	  case 10:
																	  	{a[0][0]=79;
																	  	print();
																	  	enter();
																	  	printf("tie");
																	  	break;
																		  }
														  }break;
														  }
									  }break;
									  }
									  case 00:
									  	{a[0][1]=79;
									  	print();
									  	enter();
									  	switch(n)
									  	{
									  		case 02:
									  			case 10:
									  				case 12:
									  					case 20:
									  						{a[2][1]=79;
									  						print();
									  						printf("compupter wins");
									  						break;
															  }
															  case 21:
															  	{a[2][0]=79;
															  	print();
															  	enter();
															  	switch(n)
															  	{
															  		case 10:
															  			case 12:
															  				{a[0][2]=79;
															  				print();
															  				printf("computer wins");
															  				break;
																			  }
																			  case 02:
																			  	{a[1][2]=79;
																			  	print();
																			  	enter();
																			  	printf("tie");
																			  	break;
																				  }
																  }break;
																  }
										  }break;
										  }
										  case 02:
										  	{a[1][2]=79;
										  	print();
										  	enter();
										  	switch(n)
										  	{
										  		case 00:
										  			case 01:
										  				case 20:
										  					case 21:
										  						{a[1][0]=79;
										  						print();
										  						printf("computer wins");
										  						break;
																  }
																  case 10:
																  	{a[2][1]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{case 00:
																  		case 20:
																  			{a[0][1]=79;
																  			print();
																  			printf("computer wins");
																  			break;
																			  }
																			  case 01:
																			  	{a[0][0]=79;
																			  	print();
																			  	enter();
																			  	printf("tie");
																			  	break;
																			  		
																				  }
																	  }break;
																	  }
											  }break;
											  }
											  case 12:
											  	{a[0][2]=79;
											  	print();
											  	enter();
											  	switch(n)
											  	{
											  		case 00:
											  			case 01:
											  				case 10:
											  					case 21:
											  						{a[2][0]=79;
											  						print();
											  						printf("computer wins");
											  						break;
																	  }
																	  case 20:
																	  	{a[2][1]=79;
																	  	print();
																	  	enter();
																	  	switch(n)
																	  	{
																	  		case 00:
																	  			case 10:
																	  				{a[0][1]=79;
																	  				print();
																	  				printf("computer wins");
																	  				break;
																					  }
																					  case 01:
																					  	{a[0][0]=79;
																					  	print();
																					  	enter();
																					  	printf("tie");
																					  	break;
																						  }
																		  }break;
																		  }
												  }break;
												  }
												  case 20:
												  	{a[2][1]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 00:
												  			case 02:
												  				case 10:
												  					case 12:
												  						{a[0][1]=79;
												  						print();
												  						printf("computer wins");
												  						break;
																		  }
																		  case 01:
																		  	{a[1][0]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{
																		  		case 00:
																		  			case 02:
																		  				{a[1][2]=79;
																		  				print();
																		  				printf("computer wins");
																		  				break;
																						  }
																						  case 12:
																						  	{a[0][2]=79;
																							  print();
																							  enter();
																							  printf("tie")	;
																							  break;																						  }
																			  }break;
																			  }
													  }break;
													  }
					  }break;
					  }
					  case 02:
					  {a[1][1]=79;
					  print();
					  enter();
					  switch(n)
					  {
					  	case 00:
					  		{a[0][1]=79;
					  		print();
					  		enter();
					  		switch(n)
					  		{
					  			case 10:
					  				case 12:
					  					case 20:
					  						case 22:
					  							{a[2][1]=79;
					  							print();
					  							printf("computer wins");
					  							break;
												  }
												  case 21:
												  	{a[1][0]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 20:
												  			case 22:
												  				{a[1][2]=79;
												  				print();
												  				printf("computer wins");
												  				break;
																  }
																  case 12:
																  	{a[2][2]=79;
																  	print();
																  	enter();
																  	printf("tie");
																  	break;
																	  }
																	  
													  }break;
													  }
							  }break;
							  }
							  case 21:
							  	{a[2][2]=79;
							  	print();
							  	enter();
							  	switch(n)
							  	{
							  		case 01:
							  			case 10:
							  				case 12:
							  					case 20:
							  						{
							  							a[0][0]=79;
							  							print();
							  							printf("computer wins");
							  							break;
													  }
													  case 00:
													  	{a[0][1]=79;
													  	print();
													  	enter();
													  	switch(n)
													  	{
													  		case 10:
													  			{a[2][0]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }
																case 12:
													  			{a[1][0]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }  
																case 20:
													  			{a[1][0]=79;
													  			print();
													  			enter();
													  			printf("tie");
													  			break;
																  }  
																  
														  }break;
														  }
								  }break;
								  }
								  case 10:
								  	{
								  		a[0][1]=79;
								  		print();
								  		enter();
								  		switch(n)
								  		{
								  			case 00:
								  				case 12:
								  					case 20:
								  						case 22:
								  							{a[2][1]=79;
								  							print();
								  							printf("computer wins");
								  							break;
															  }
															  case 21:
															  	{a[0][0]=79;
															  	print();
															  	enter();
															  	switch(n)
															  	{
															  		case 12:
															  			case 20:
															  				{a[2][2]=79;
															  				print();
															  				printf("computer wins");
															  				break;
																			  }
																			  case 22:
																			  	{a[2][0]=79;
																			  	print();
																			  	enter();
																			  	printf("tie");
																			  	break;
																				  }
																  }break;
																  }
										  }break;
									  }
									  case 01:
									  	{a[0][0]=79;
									  	print();
									  	enter();
									  	switch(n)
									  	{
									  		case 10:
									  			case 12:
									  				case 20:
									  					case 21:
									  						{a[2][2]=79;
									  						print();
									  							printf("computer wins");
									  							break;
															  }
															  case 22:
															  	{a[1][2]=79;
															  	print();
															  		enter();
															  		switch(n)
															  		{
															  			case 20:
															  				case 21:
															  					{a[1][0]=79;
															  					print();
															  					printf("computer wins");
															  					break;
																				  }
																				  case 10:
																				  	{a[2][1]=79;
																				  	print();
																				  	enter();
																				  	printf("tie");
																				  	break;
																					  }
																	  }break;
																  }
										  }break;
										  }
										  case 12:
										  	{a[2][2]=79;
										  	print();
										  	enter();
										  	switch(n)
										  	{
										  		case 01:
										  			case 10:
										  				case 20:
										  					case 21:
										  						{a[0][0]=79;
										  						print();
										  						printf("computer wins");
										  						break;	
																  }
																  case 00:
																  	{a[0][1]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{
																  		case 10:
																  			{a[2][0]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }
																		case 20:
																  			{a[1][0]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }	case 21:
																  			{a[1][0]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }  
																	  }break;
																  		
																  		
																	  }
											  }break;
											  }
											  case 20:
											  	{a[0][1]=79;
											  	print();
											  	enter();
											  	switch(n)
											  	{
											  		case 00:
											  			case 10:
											  				case 12:
											  					case 22:
											  						{a[2][1]=79;
											  						print();
											  						printf("computer wins");
											  						break;
																	  }
																	  case 21:
																	  	{
																	  		a[2][2]=79;
																	  		print();
																	  		enter();
																	  		switch(n)
																	  		{
																	  			case 10:
																	  				case 12:
																	  					{a[0][0]=79;
																	  					print();
																	  					printf("computer wins");
																	  					break;
																						  }
																						  case 00:
																						  	{a[1][0]=79;
																						  	print();
																						  	enter();
																						  	printf("tie");
																						  	break;
																							  }
																			  }break;
																		  }
																	  	
												  }break;
												  }
												  case 22:
												  	{a[1][2]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 00:
												  			case 01:
												  				case 20:
												  					case 21:
												  						{a[1][0]=79;
												  						print();
												  						printf("computer wins");
												  						break;
																		  }
																		  case 10:
																		  	{a[0][1]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{
																		  		case 00:
																		  			case 20:
																		  				{a[2][1]=79;
																		  				print();
																		  				printf("computer wins");
																		  				break;
																						  }
																						  case 21:
																						  	{a[2][0]=79;
																						  	print();
																						  	enter();
																						  	printf("tie");
																						  	break;
																							  }
																			  }break;
																			  }
													  }break;
													  }
					  }break;
						  }	
						  case 12:
						  	{a[1][1]=79;
						  	print();
						  	enter();
						  	switch(n)
						  	{
						  		case 00:
						  			
						  			{a[0][1]=79;
						  			print();
						  			enter();
						  			switch(n)
						  			{
						  				case 02:
						  					case 10:
						  						case 20:
						  							case 22:
						  								{a[2][1]=79;
						  								print();
						  								printf("computer wins");
						  								break;
														  }
														  case 21:
														  	{a[2][0]=79;
														  	print();
														  	enter();
														  	switch(n)
														  	{
														  		case 10:
														  			case 22:
														  				{a[0][2]=79;
														  				print();
														  				printf("computer wins");
														  				break;
																		  }
																		  case 02:
																		  	{a[2][2]=79;
																		  	print();
																		  	enter();
																		  	printf("tie");
																		  	break;
																			  }
															  }break;
															  }
									  }break;
						  				
									  }
									  case 21:
									  	{a[2][2]=79;
									  	print();
									  	enter();
									  	switch(n)
									  	{case 01:
									  		case 02:
									  			case 10:
									  				case 20:
									  					{a[0][0]=79;
									  					print();
									  					printf("computer wins");
									  					break;
														  }
														  case 00:
														  	{a[2][0]=79;
														  	print();
														  	enter();
														  	switch(n)
														  	{
														  		case 01:
														  			case 10:
														  				{a[0][2]=79;
														  				print();
														  				printf("computer wins");
														  				break;
																		  }
																		  case 02:
																		  	{a[0][1]=79;
																		  	print();
																		  	enter();
																		  	printf("tie");
																		  	break;
																			  }
															  }break;
															  }
									  		
										  }break;
										  }
										  case 01:
										  	{a[0][2]=79;
										  	print();
										  	enter();
										  	switch(n)
										  	{
										  		case 00:
										  			case 10:
										  				case 21:
										  					case 22:
										  						{a[2][0]=79;
										  						print();
										  						printf("computer wins");
										  						break;
																  }
																  case 20:
																  	{a[2][2]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{
																  		case 10:
																  			case 21:
																  				{a[0][0]=79;
																  				print();
																  				printf("computer wins");
																  				break;	
																				  }
																				  case 00:
																				  	{
																				  		a[1][0]=79;
																				  		print();
																				  		enter();
																				  		printf("tie");
																				  		break;
																					  }
																	  }break;
																	  }
											  }break;
											  }
											  case 02:
											  	{
											  		a[2][2]=79;
											  		print();
											  		enter();
											  		switch(n)
											  		{
											  			case 01:
											  				case 10:
											  					case 20:
											  						case 21:
											  							{a[0][0]=79;
											  							print();
											  							printf("computer wins");
											  							break;
																		  }
																		  case 00:
																		  	{a[0][1]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{
																		  		case 10:
																		  			case 20:
																		  				{a[2][1]=79;
																		  				print();
																		  				printf("computer wins");
																		  				break;
																						  }
																						  case 21:
																						  	{a[1][0]=79;
																						  	print();
																						  	enter();
																						  	printf("tie");
																						  	break;
																							  }
																			  }break;
																			  }
													  }break;
												  }
												  case 10:
												  	{a[0][1]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 00:
												  			case 02:
												  				case 20:
												  					case 22:
												  						{a[2][1]=79;
												  						print();
												  						printf("computer wins");
												  						break;
																		  }
																		  case 21:
																		  	{a[0][0]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{case 20:
																		  		{a[0][2]=79;
																		  		print();
																		  		printf("computer wins");
																		  		break;
																				  }
																			  
																		  		case 22:
																		  			{a[0][2]=79;
																		  			print();
																		  			printf("computer wins");
																		  			break;
																					  }
																					  case 02:
																					  	{a[2][2]=79;
																					  	print();
																					  	printf("computer wins");
																					  	break;
																						  }}break;
																			  }
																			  }break;
													  }
												  		
													  
													  case 20:
													  	{a[2][1]=79;
													  	print();
													  	enter();
													  	switch(n)
													  	{
													  		case 00:
													  			case 02:
													  				case 10:
													  					case 22:
													  						{a[0][1]=79;
													  						print();
													  						printf("computer wins");
													  						break;
																			  }
																			  case 01:
																			  	{a[0][0]=79;
																			  	print();
																			  	enter();
																			  	switch(n)
																			  	{case 02:
																			  		case 10:
																			  			{a[2][2]=79;
																			  			print();
																			  			printf("computer wins");
																			  			break;
																						  }
																						  case 22:
																						  	{a[0][2]=79;
																						  	print();
																						  	enter();
																						  	printf("tie");
																						  	break;
																							  }
																			  		
																				  }break;
																				  }
														  }break;
														  }
														  case 22:
														  	{a[0][2]=79;
														  	print();
														  	enter();
														  	switch(n)
														  	{
														  		case 00:
														  			case 01:
														  				case 10:
														  					case 21:
														  						{a[2][0]=79;
														  						print();
														  						printf("computer wins");
														  						break;
																				  }
																				  case 20:
																				  	{a[2][1]=79;
																				  	print();
																				  	enter();
																				  	switch(n)
																				  	{case 00:
																				  		case 10:
																				  			{a[0][1]=79;
																				  			print();
																				  			printf("computer wins");
																				  			break;
																							  }
																							  case 01:
																							  	{a[0][0]=79;
																							  	print();
																							  	enter();
																							  	printf("tie");
																							  	break;
																								  }
																					  }break;
																					  }
																					  }break;
															  }
															  }break;
													  
							  }
							  case 20:
							  	{a[1][1]=79;
							  	print();
							  	enter();
							  	switch(n)
							  	{
							  		case 00:
							  			{a[1][0]=79;
							  			print();
							  			enter();
							  			switch(n)
							  			{
							  				case 01:
							  					case 02:
							  						case 21:
							  							case 22:
							  								{a[1][2]=79;
							  								print();
							  								printf("computer wins");
							  								break;
															  }
															  case 12:
															  	{a[0][1]=79;
															  	print();
															  	enter();
															  	switch(n)
															  	{
															  		case 02:
															  			case 22:
															  				{a[2][1]=79;
															  				print();
															  				printf("computer wins");
															  				break;
																			  }
																			  case 21:
																			  	{a[2][2]=79;
																			  	print();
																			  	enter();
																			  	printf("tie");
																			  	break;
																			  	
																				  }
																  }break;
																  }
										  }break;
										  }
										  case 12:
										  	{a[2][2]=79;
										  	print();
										  	enter();
										  	switch(n)
										  	{
										  		case 01:
										  			case 02:
										  				case 10:
										  					case 21:
										  						{a[0][0]=79;
										  						print();
										  						printf("computer wins");
										  						break;
																  }
																  case 00:
																  	{a[1][0]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{
																  		case 01:
																  			{a[0][2]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }case 02:
																  			{a[0][1]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }case 21:
																  			{a[0][1]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }
																	  }break;
																	  }
											  }break;
											  }
											  case 01:
											  	{a[0][0]=79;
											  	print();
											  	enter();
											  	switch(n)
											  	{
											  		case 02:
											  			case 10:
											  				case 12:
											  					case 21:
											  						{a[2][2]=79;
											  						print();
											  						printf("computer wins");
											  						break;
																	  }
																	  case 22:
																	  	{a[2][1]=79;
																	  	print();
																	  	enter();
																	  	switch(n)
																	  	{case 02:
																	  		{a[1][2]=79;
																	  		print();
																	  		enter();
																	  		printf("tie");
																	  		break;
																			  }
																			  case 10:
																	  		{a[1][2]=79;
																	  		print();
																	  		enter();
																	  		printf("tie");
																	  		break;
																			  }case 12:
																	  		{a[0][2]=79;
																	  		print();
																	  		enter();
																	  		printf("tie");
																	  		break;
																			  }
																	
																	  		
																		  }break;
																		  }
												  }break;
												  }
												  case 02:
												  	{a[0][1]=79;
												  	print();
												  	enter();
												  	switch(n){
												  		case 00:
												  			case 10:
												  				case 12:
												  					case 22:
												  						{a[2][1]=79;
												  						print();
												  						printf("computer wins");
												  						break;
																		  }
																		  case 21:
																		  	{a[2][2]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{case 00:
																		  		{a[1][0]=79;
																		  		print();
																		  		enter();
																		  		printf("tie");
																		  		break;
																				  }case 10:
																		  		{a[0][0]=79;
																		  		print();
																		  		enter();
																		  		printf("tie");
																		  		break;
																				  }case 12:
																		  		{a[0][0]=79;
																		  		print();
																		  		enter();
																		  		printf("tie");
																		  		break;
																				  }
																				  
																		  		
																			  }break;
																			  }
	
													  }break;													  }
													  case 10:
													  	{a[0][0]=79;
													  	print();
													  	enter();
													  	switch(n)
													  	{
													  		case 01:
													  			case 02:
													  				case 12:
													  					case 21:
													  						{a[2][2]=79;
													  						print();
													  						printf("computer wins");
													  						break;
																			  }
																			  case 22:
																			  	{a[2][1]=79;
																			  	print();
																			  	enter();
																			  	switch(n)
																			  	{
																			  		case 02:
																			  			case 12:
																			  				{a[0][1]=79;
																			  				print();
																			  				printf("computer wins");
																			  				break;
																							  }
																							  case 01:
																							  	{a[0][2]=79;
																							  	print();
																							  	enter();
																							  	printf("tie");
																							  	break;
																								  }
																				  }break;
																				  }
														  }break;
														  }
														  case 21:
														  	{a[2][2]=79;
														  	print();
														  	enter();
														  	switch(n)
														  	{case 01:
														  		case 02:
														  			case 10:
														  				case 12:
														  					{a[0][0]=79;
														  					print();
														  					printf("computer wins");
														  					break;
																			  }
																			  case 00:
																			  	{a[1][0]=79;
																			  	print();
																			  	enter();
																			  	switch(n)
																			  	{case 01:
																			  		case 02:
																			  			{a[1][2]=79;
																			  			print();
																			  			printf("computer wins");
																			  			break;
																						  }
																						  case 12:
																						  	{a[0][1]=79;
																						  	print();
																						  	enter();
																						  	printf("tie");
																						  	break;
																							  }
																				  }break;
																				  }
														  		
															  }break;
															  }
															  case 22:
															  	{
															  		a[2][1]=79;
															  		print();
															  		enter();
															  		switch(n)
															  		{
															  			case 00:
															  				case 02:
															  					case 10:
															  						case 12:
															  							{
															  								a[0][1]=79;
															  								print();
															  								printf("computer wins");
															  								break;
																						  }
																						  case 01:
																						  	{a[1][0]=79;
																						  	print();
																						  	enter();
																						  	switch(n)
																						  	{
																						  	case 00:
																							  case 02:
																							  {a[1][2]=79;
																							  print();
																							  printf("computer wins");
																							  break;
																								  }
																								  case 12:
																								  {a[0][2]=79;
																								  print();
																								  enter();
																								  printf("tie");
																								  break;
																									  }	
																						  		
																							  }break;
																							  }
															  							
																	  }break;
															  		
																	  
																  }
														  
								  }break;
								  }
								  case 21:
								  {
									  	a[1][1]=79;
								  	print();
								  	enter();
								  	switch(n)
								  	{
								  		case 00:
								  			{a[2][0]=79;
								  			print();
								  			enter();
								  			switch(n)
								  			{
								  				case 01:
								  					case 10:
								  						case 12:
								  							case 22:
								  								{a[0][2]=79;
								  								print();
								  								printf("computer wins");
								  								break;
								  								
																  }
																  case 02:
																  	{a[0][1]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{
																  		case 12:
																  			{a[2][2]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }
																			  case 10:
																  			{a[2][2]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }case 22:
																  			{a[1][2]=79;
																  			print();
																  			enter();
																  			printf("tie");
																  			break;
																			  }
																	  
																	  }break;
											  }
								  			
											  }break;
									  }
									  case 20:
									  	{
									  		a[2][2]=79;
									  		print();
									  		enter();
									  		switch(n)
									  		{
									  			case 01:
									  				case 02:
									  					case 10:
									  						case 12:
									  							{a[0][0]=79;
									  							print();
									  							printf("computer wins");
									  							break;
																  }
																  case 00:
																  	{a[1][0]=79;
																  	print();
																  	enter();
																  	switch(n)
																  	{
																  		case 01:
																  			case 02:
																  				{a[1][2]=79;
																  				print();
																  				printf("computer wins");
																  				break;
																				  }
																				  case 12:
																				  	{a[0][2]=79;
																				  	print();
																				  	enter();
																				  	printf("tie");
																				  	break;
																					  }
																					  
																	  }break;
																  
																	  }
																	  
											  }break;
										  }
										  case 01:
										  	{
										  		a[1][0]=79;
										  		print();
										  		enter();
										  		switch(n)
										  		{
										  			case 00:
										  				case 02:
										  					case 20:
										  						case 22:
										  							{a[1][2]=79;
										  							print();
										  							printf("computer wins");
										  							break;
																	  }
																	  case 12:
																	  	{a[0][2]=79;
																	  	print();
																	  	enter();
																	  	switch(n)
																	  	{
																	  		case 00:
																	  			case 22:
																	  				{a[2][0]=79;
																	  				print();
																	  				printf("computer wins");
																	  				break;
																					  }
																					  case 20:
																					  	{a[2][2]=79;
																					  	print();
																					  	enter();
																					  	printf("tie");
																					  	break;
																						  }
																		  }break;
																		  }
												  }break;
											  }
											  case 02:
											  	{
											  		a[2][2]=79;
											  		print();
											  		enter();
											  		switch(n)
											  		{
											  			case 01:
											  				case 10:
											  					case 20:
											  						case 12:
											  							{a[0][0]=79;
											  							print();
											  							printf("Computer wins");
											  							break;
																		  }
																		  case 00:
																		  	{a[0][1]=79;
																		  	print();
																		  	enter();
																		  	switch(n)
																		  	{
																		  		case 10:
																		  			{a[2][0]=79;
																		  			print();
																		  			enter();
																		  			printf("tie");
																		  			break;
																					  }case 12:
																		  			{a[1][0]=79;
																		  			print();
																		  			enter();
																		  			printf("tie");
																		  			break;
																					  }case 20:
																		  			{a[1][0]=79;
																		  			print();
																		  			enter();
																		  			printf("tie");
																		  			break;
																					  }
																					  
																			  }break;
																			  }
													  }break;
												  }
												  case 10:
												  	{a[2][0]=79;
												  	print();
												  	enter();
												  	switch(n)
												  	{
												  		case 00:
												  			case 01:
												  				case 12:
												  					case 22:
												  						{a[0][2]=79;
												  						print();
												  						printf("computer wins");
												  						break;
																		  }
																		  case 02:
																		  	{
																		  		a[0][0]=79;
																		  		print();
																		  		enter();
																		  		switch(n)
																		  		{
																		  			case 12:
																		  				case 01:
																		  					{a[2][2]=79;
																		  					print();
																		  					printf("computer wins");
																		  					break;
																							  }
																							  case 22:
																							  	{
																							  		a[1][2]=79;
																							  		print();
																							  		enter();
																							  		printf("tie");
																							  		break;
																								  }
																				  }break;
																			  }
													  }break;
												  		
													  }
													  case 12:
													  	
													  	{
													  		a[2][2]=79;
													  		print();
													  		enter();
													  		switch(n)
													  		{
													  			case 01:
													  				case 02:
													  					case 10:
													  						case 20:
													  							{a[0][0]=79;
													  							print();
													  							printf("computer wins");
													  							break;
																				  }
																				  case 00:
																				  	{a[2][0]=79;
																				  	print();
																				  	enter();
																				  	switch(n)
																				  	{
																				  		case 01:
																				  			case 10:
																				  				{a[0][2]=79;
																				  				print();
																				  				printf("computer wins");
																				  				break;
																				  				
																								  }
																								  case 02:
																								  	{
																								  		a[0][1]=79;
																								  		print();
																								  		enter();
																								  		printf("tie");
																								  		break;
																									  }
																					  }break;
																					  }
															  }break;
														  }
														  case 22:
														  	{
														  		a[2][0]=79;
														  		print();
														  		enter();
														  		switch(n)
														  		{case 00:
														  			case 01:
														  				case 10:
														  					case 12:
														  						{a[0][2]=79;
														  						print();
														  						printf("computer wins");
														  						break;
																				  }
																				  case 02:
																				  	{
																				  		a[1][2]=79;
																				  		print();
																				  		enter();
																				  		switch(n)
																				  		{
																				  			case 00:
																				  				case 01:
																				  					{a[1][0]=79;
																				  					print();
																				  					printf("computer wins");
																				  					break;
																									  }
																									  case 10:
																									  	{
																									  		a[0][0]=79;
																									  		print();
																									  		enter();
																									  		printf("tie");
																									  		break;
																										  }
																						  }break;
																					  }
																  }break;
															  }
								  	
								  
							  
							  }break;
					  	
				  
				}
		}}
		
		
		
		
		
		
		
		main()
{
	
	
	printf("lets play tic-tac-toe! \n");
	printf("start the game,you are X!");
	
	printf("the positions for the XS and OS are shown below,you can choose the index where you wish to insert X!\n");
	printf("__\t\t__\t\t__\n");
	printf("00\t\t01\t\t02\n\n");
	printf("__\t\t__\t\t__\n");
	printf("10\t\t11\t\t12\n\n");
	printf("__\t\t__\t\t__\n");
	printf("20\t\t21\t\t22\n\n");
		for(int k = 0; k<3;k++)
			{
				for(int l =0 ; l<3 ; l++)
				{
					a[k][l]=95;
					
		} 
	
}

enter();
cases();

}
		
		
		
		

