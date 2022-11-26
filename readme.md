# Winry 25-key RGB Backlight Hot Swap Mechanical Keyboard

SpiderIsland 25 key (DEBROGLIE Lightning-25)

The seller provides files that work with Via and Vial

This version
- Num lock indication
- layer indication
- turn off the backlight when putting into sleep mode or turning off the computer

Version vial-num_kp - digital block is on the right (Num button is second in the top row)
Version vial-num_kp-A1 - digital block is on the left (Num button is the first in the top row)

.hex examples for uploading firmware using QMK Toolbox
Version Num - B2 - winry_winry25tf_rgb_vial-num_kp.hex
Version Num - A1 - winry_winry25tf_rgb_vial-num_kp-A1.hex

Video example - https://youtu.be/CNF1vn-M7WM

Attention !!!
Compiling for Vial broke macros in Via

�த���� �।��⠢��� 䠩�� ࠡ���騥 � Via � Vial

�� �����
- �������� Num lock
- �������� ᫮� 
- �몫�祭�� ���ᢥ⪨ �� ��ॢ��� � ��騩 ०�� ��� �몫�祭�� ��������

����� vial-num_kp - ��஢�� ���� ��室���� �ࠢ� (������ Num - ���� � ���孥� ���) 
����� vial-num_kp-A1 - ��஢�� ���� ��室���� ᫥�� (������ Num - ��ࢠ� � ���孥� ���)

�ਬ��� .hex ��� ������� ��訢�� �ᯮ���� QMK Toolbox
Version Num - B2 - winry_winry25tf_rgb_vial-num_kp.hex
Version Num - A1 - winry_winry25tf_rgb_vial-num_kp-A1.hex

�ਬ�� �� ����� - https://youtu.be/CNF1vn-M7WM

�������� !!!
��������� ��� Vial ᫮���� ࠡ��� ����ᮢ � Via

Keyboard from
* [SpiderIsland on AliExpress(reseller)](https://a.aliexpress.com/_dVJsSpR). Seller provides [kbfirmware](https://kbfirmware.com/) JSON config that was converted to QMK.


* Keyboard Maintainer: [andrzejressel](https://github.com/andrzejressel)
* Hardware Availability: 
https://aliexpress.com/item/1005001523579896.html
https://world.taobao.com/item/599731303104.htm

Make example for this keyboard (after setting up your build environment):

    make winry/winry25tf/rgb:default
    make winry/winry25tf/rgb:vial-num_kp
    make winry/winry25tf/rgb:vial-num_kp-A1

**Reset Key**: Located on the other side of the keyboard.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
