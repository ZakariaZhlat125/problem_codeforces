/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplicationjnext_sopj;

/**
 *
 * @author zakoo
 */
  import java.io.*;
  import java.util.*;
  import java.lang.*;
class Stack{
    private int a[];
    private int top;
    private int size;
    public Stack(int n){
        size=n;
        a=new int[size];
        for(int i=0;i<size;++i)
            a[i]=0;
        top--;
    }
    public boolean push(int k){
        if(top<size-1){
            a[++top]=k;
            return true;
        }
        else
            return false;
    }
}
public class JavaApplicationjnext_sopj {


    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
