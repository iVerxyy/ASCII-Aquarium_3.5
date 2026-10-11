// Patch snippet for TFT_eSPI/User_Setup_Select.h
//
// IMPORTANT:
// Do NOT replace the whole file. Keep the original file content (or restore
// User_Setup_Select_Backup.h) because it contains required driver macro logic.
//
// In User_Setup_Select.h, ensure this line exists in the "selection" section:
#include <User_Setup.h>
//
// Then copy this project's User_Setup.h into TFT_eSPI root.
