# Dynamic array (templates)
Project with class `DynamicArray` for dynamically store objects in array using templates. 
You may use this class after include `dynamic-array.h` and using this class like in `menu.cpp`.

## Example of using some actions from menu
- Create array with length=5 and add 5 `String` classes in array:
```text
Write array length=5

-----
Menu:
-----
1. Add values to array.
2. Get array length.
3. Change value by index.
4. Get value by index.
5. Change array length.
6. Print array.
7. Clear array.
8. Exit.
Select your choice: 1

array[0]=qwe

array[1]=sdf

array[2]=hi

array[3]=hello

array[4]=plus
```
- Print array data:
```text
Select your choice: 6

0=<qwe>; 1=<sdf>; 2=<hi>; 3=<hello>; 4=<plus>
```
- Get array length:
```text
Select your choice: 2

Length=5
```
- Resize array:
```text
Select your choice: 5

Write new length=7

Changing the array length from 5 to 7
```
- Add new values by index in resized array:
```text
Select your choice: 3

Write index=5

Write new string=wow

Changed array[5] =  -> wow
...
Select your choice: 3

Write index=6

Write new string=work

Changed array[6] =  -> work
```
- New array will be:
```text
Select your choice: 6

0=<qwe>; 1=<sdf>; 2=<hi>; 3=<hello>; 4=<plus>; 5=<wow>; 6=<work>
```
