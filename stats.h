/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Header file for  C programming code >
 *
 * <This file contains all the functions declarations used in this app.>
 *
 * @author <Mohamed Rekaya>
 * @date <19-8-2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(int, int, int, int);//A function that prints the statistcis of an array including minimum, maximum, mean, and median.
void print_array(unsigned char[], int len);//Given an array of data and a length, pritns the array  to the screen.
int find_median(unsigned char[], int len);//Given an array of data and a length returns the mean
int find_maximum(unsigned char[], int len);//Given an array of data and a length return the maximum
int find_minimum(unsigned char[], int len);//Given an array of data and a length, return the minimum
void sort_array(unsigned char[], int len);//Given ana array of data and a length, sorts the array from largest to smallest.
int find_mean(unsigned char[], int len);//Given an array of data and a length,return the mean.
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
