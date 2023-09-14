/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/

#include <stdio.h>

int main() {
    
    int n , temp ;
    printf ( "Enter new element of Array :\n" ) ;
    scanf ( "%d", &n ) ;

    // สร้างตัวแปร พร้อมเก็บค่าในแต่ละช่อง
    int array[ n ] ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf ( "Input :\n" ) ;
        scanf ( "%d", &array[ i ] ) ;
    } // end for

    // แสดงค่า array ก่อนจัดรูป
    printf ( "Array:" ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf ( " %d", array[ i ] ) ;
    }
    
    // เรียงจากค่าเลขน้อยไปหามาก
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int k = i + 1 ; k < n ; k++ ) {
            if ( array[ i ] < array[ k ] ) {
                temp = array[ i ] ;
                array[ i ] = array[ k ] ;
                array[ k ] = temp ;
            } // end if
        } // end for
    } // end for
    
    // แสดงค่าที่มากที่สุด โดยค่าที่มากที่สุดเริ่มต้นในกล่องอาร์เรย์จาก 0 
    printf ( "\nThe large 3rd element = %d", array[ 2 ] ) ;
    
    return 0 ;
} // end for