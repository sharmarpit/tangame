#ifndef GOSU_BUTTONSMAC_HPP
#define GOSU_BUTTONSMAC_HPP

namespace Gosu
{
    //! List of all the button ids that can be used with Gosu::Input.
    //! This enumeration contains ids for non-character keyboard keys (kb*),
    //! mouse buttons and mouse wheel (ms*) and gamepad buttons (gp*).
    enum ButtonName
    {
        kbRangeBegin = 0x01,
        kbEscape = 0x35,
        kbF1 = 0x7a,
        kbF2 = 0x78,
        kbF3 = 0x63,
        kbF4 = 0x76,
        kbF5 = 0x60,
        kbF6 = 0x61,
        kbF7 = 0x62,
        kbF8 = 0x64,
        kbF9 = 0x65,
        kbF10 = 0x6d,
        kbF11 = 0x67,
        kbF12 = 0x6f,
        kb1 = 0x12,
        kb2 = 0x13,
        kb3 = 0x14,
        kb4 = 0x15,
        kb5 = 0x17,
        kb6 = 0x16,
        kb7 = 0x1a,
        kb8 = 0x1c,
        kb9 = 0x19,
        kb0 = 0x1d,
        kbTab = 0x30,
        kbReturn = 0x24,
        kbSpace = 0x31,
        kbLeftShift = 0x38,
        kbRightShift = 0x3c,
        kbLeftControl = 0x3b,
        kbRightControl = 0x3e,
        kbLeftAlt = 0x3a,
        kbRightAlt = 0x3d,
        kbLeftMeta = 0x37,
        kbRightMeta = 0x36,
        kbBackspace = 0x33,
        kbLeft = 0x7b,
        kbRight = 0x7c,
        kbUp = 0x7e,
        kbDown = 0x7d,
        kbHome = 0x73,
        kbEnd = 0x77,
        kbInsert = 0x72,
        kbDelete = 0x75,
        kbPageUp = 0x74,
        kbPageDown = 0x79,
        kbEnter = 0x4c,
        kbNumpad1 = 0x53,
        kbNumpad2 = 0x54,
        kbNumpad3 = 0x55,
        kbNumpad4 = 0x56,
        kbNumpad5 = 0x57,
        kbNumpad6 = 0x58,
        kbNumpad7 = 0x59,
        kbNumpad8 = 0x5b,
        kbNumpad9 = 0x5c,
        kbNumpad0 = 0x52,
        kbNumpadAdd = 0x45,
        kbNumpadSubtract = 0x4e,
        kbNumpadMultiply = 0x43,
        kbNumpadDivide = 0x4b,
        kbRangeEnd = 0xffff,
        
        msRangeBegin,
        msLeft = msRangeBegin,
        msRight,
        msMiddle,
        msWheelUp,
        msWheelDown,
        msRangeEnd,
        
        gpRangeBegin,
        gpLeft = gpRangeBegin,
        gpRight,
        gpUp,
        gpDown,
        gpButton0,
        gpButton1,
        gpButton2,
        gpButton3,
        gpButton4,
        gpButton5,
        gpButton6,
        gpButton7,
        gpButton8,
        gpButton9,
        gpButton10,
        gpButton11,
        gpButton12,
        gpButton13,
        gpButton14,
        gpButton15,
        gpRangeEnd = gpButton15,
        
        kbNum = kbRangeEnd - kbRangeBegin + 1,
        msNum = msRangeEnd - msRangeBegin + 1,
        gpNum = gpRangeEnd - gpRangeBegin + 1,
        
        numButtons = gpRangeEnd + 1,
		noButton = 0xffffffff
    };
}
    
#endif
