/*
Automatically generated by HaskellDirect (ihc.exe), version 0.21
Created: 22:10 ope, Sunday 05 August, 2012
Command line: -fno-qualified-names -fno-imports -fno-export-lists -fout-pointers-are-not-refs -c Excel.idl -o Excel.hs
*/


#ifndef __INT64_DEFINED__
#ifdef __GNUC__
typedef long long int64;
typedef unsigned long long uint64;
#else
#ifdef _MSC_VER
typedef __int64 int64;
typedef unsigned __int64 uint64;
#else
/* Need some help here, please. */
#endif
#endif
#define __INT64_DEFINED__
#endif


typedef long (__stdcall * prim_Excel_presetDrop__funptr) (void* arg1, MsoCalloutDropType arg2);
long prim_Excel_presetDrop (void* arg0, void* arg1, MsoCalloutDropType* arg2)
{
long res;
prim_Excel_presetDrop__funptr __funptr__;
__funptr__ = (prim_Excel_presetDrop__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAccent__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setAccent (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setAccent__funptr __funptr__;
__funptr__ = (prim_Excel_setAccent__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAngle__funptr) (void* arg1, MsoCalloutAngleType arg2);
long prim_Excel_setAngle (void* arg0, void* arg1, MsoCalloutAngleType* arg2)
{
long res;
prim_Excel_setAngle__funptr __funptr__;
__funptr__ = (prim_Excel_setAngle__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAutoAttach__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setAutoAttach (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setAutoAttach__funptr __funptr__;
__funptr__ = (prim_Excel_setAutoAttach__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBorder__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setBorder (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setBorder__funptr __funptr__;
__funptr__ = (prim_Excel_setBorder__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setType__funptr) (void* arg1, MsoCalloutType arg2);
long prim_Excel_setType (void* arg0, void* arg1, MsoCalloutType* arg2)
{
long res;
prim_Excel_setType__funptr __funptr__;
__funptr__ = (prim_Excel_setType__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setRGB__funptr) (void* arg1, MsoRGBType arg2);
long prim_Excel_setRGB (void* arg0, void* arg1, MsoRGBType* arg2)
{
long res;
prim_Excel_setRGB__funptr __funptr__;
__funptr__ = (prim_Excel_setRGB__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setObjectThemeColor__funptr) (void* arg1, MsoThemeColorIndex arg2);
long prim_Excel_setObjectThemeColor (void* arg0, void* arg1, MsoThemeColorIndex* arg2)
{
long res;
prim_Excel_setObjectThemeColor__funptr __funptr__;
__funptr__ = (prim_Excel_setObjectThemeColor__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBeginArrowheadLength__funptr) (void* arg1, MsoArrowheadLength arg2);
long prim_Excel_setBeginArrowheadLength (void* arg0, void* arg1, MsoArrowheadLength* arg2)
{
long res;
prim_Excel_setBeginArrowheadLength__funptr __funptr__;
__funptr__ = (prim_Excel_setBeginArrowheadLength__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBeginArrowheadStyle__funptr) (void* arg1, MsoArrowheadStyle arg2);
long prim_Excel_setBeginArrowheadStyle (void* arg0, void* arg1, MsoArrowheadStyle* arg2)
{
long res;
prim_Excel_setBeginArrowheadStyle__funptr __funptr__;
__funptr__ = (prim_Excel_setBeginArrowheadStyle__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBeginArrowheadWidth__funptr) (void* arg1, MsoArrowheadWidth arg2);
long prim_Excel_setBeginArrowheadWidth (void* arg0, void* arg1, MsoArrowheadWidth* arg2)
{
long res;
prim_Excel_setBeginArrowheadWidth__funptr __funptr__;
__funptr__ = (prim_Excel_setBeginArrowheadWidth__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setDashStyle__funptr) (void* arg1, MsoLineDashStyle arg2);
long prim_Excel_setDashStyle (void* arg0, void* arg1, MsoLineDashStyle* arg2)
{
long res;
prim_Excel_setDashStyle__funptr __funptr__;
__funptr__ = (prim_Excel_setDashStyle__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setEndArrowheadLength__funptr) (void* arg1, MsoArrowheadLength arg2);
long prim_Excel_setEndArrowheadLength (void* arg0, void* arg1, MsoArrowheadLength* arg2)
{
long res;
prim_Excel_setEndArrowheadLength__funptr __funptr__;
__funptr__ = (prim_Excel_setEndArrowheadLength__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setEndArrowheadStyle__funptr) (void* arg1, MsoArrowheadStyle arg2);
long prim_Excel_setEndArrowheadStyle (void* arg0, void* arg1, MsoArrowheadStyle* arg2)
{
long res;
prim_Excel_setEndArrowheadStyle__funptr __funptr__;
__funptr__ = (prim_Excel_setEndArrowheadStyle__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setEndArrowheadWidth__funptr) (void* arg1, MsoArrowheadWidth arg2);
long prim_Excel_setEndArrowheadWidth (void* arg0, void* arg1, MsoArrowheadWidth* arg2)
{
long res;
prim_Excel_setEndArrowheadWidth__funptr __funptr__;
__funptr__ = (prim_Excel_setEndArrowheadWidth__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPattern__funptr) (void* arg1, MsoPatternType arg2);
long prim_Excel_setPattern (void* arg0, void* arg1, MsoPatternType* arg2)
{
long res;
prim_Excel_setPattern__funptr __funptr__;
__funptr__ = (prim_Excel_setPattern__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setStyle__funptr) (void* arg1, MsoLineStyle arg2);
long prim_Excel_setStyle (void* arg0, void* arg1, MsoLineStyle* arg2)
{
long res;
prim_Excel_setStyle__funptr __funptr__;
__funptr__ = (prim_Excel_setStyle__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setVisible__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setVisible (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setVisible__funptr __funptr__;
__funptr__ = (prim_Excel_setVisible__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_insert__funptr) (void* arg1, int arg2, MsoSegmentType arg3, MsoEditingType arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10);
long prim_Excel_insert (void* arg0, void* arg1, int arg2, MsoSegmentType* arg3, MsoEditingType* arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10)
{
long res;
prim_Excel_insert__funptr __funptr__;
__funptr__ = (prim_Excel_insert__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, *arg4, arg5, arg6, arg7, arg8, arg9, arg10);
return (res);
}
typedef long (__stdcall * prim_Excel_setEditingType__funptr) (void* arg1, int arg2, MsoEditingType arg3);
long prim_Excel_setEditingType (void* arg0, void* arg1, int arg2, MsoEditingType* arg3)
{
long res;
prim_Excel_setEditingType__funptr __funptr__;
__funptr__ = (prim_Excel_setEditingType__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_setSegmentType__funptr) (void* arg1, int arg2, MsoSegmentType arg3);
long prim_Excel_setSegmentType (void* arg0, void* arg1, int arg2, MsoSegmentType* arg3)
{
long res;
prim_Excel_setSegmentType__funptr __funptr__;
__funptr__ = (prim_Excel_setSegmentType__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_setColorType__funptr) (void* arg1, MsoPictureColorType arg2);
long prim_Excel_setColorType (void* arg0, void* arg1, MsoPictureColorType* arg2)
{
long res;
prim_Excel_setColorType__funptr __funptr__;
__funptr__ = (prim_Excel_setColorType__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTransparencyColor__funptr) (void* arg1, MsoRGBType arg2);
long prim_Excel_setTransparencyColor (void* arg0, void* arg1, MsoRGBType* arg2)
{
long res;
prim_Excel_setTransparencyColor__funptr __funptr__;
__funptr__ = (prim_Excel_setTransparencyColor__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTransparentBackground__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setTransparentBackground (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setTransparentBackground__funptr __funptr__;
__funptr__ = (prim_Excel_setTransparentBackground__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setObscured__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setObscured (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setObscured__funptr __funptr__;
__funptr__ = (prim_Excel_setObscured__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setType0__funptr) (void* arg1, MsoShadowType arg2);
long prim_Excel_setType0 (void* arg0, void* arg1, MsoShadowType* arg2)
{
long res;
prim_Excel_setType0__funptr __funptr__;
__funptr__ = (prim_Excel_setType0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setVisible0__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setVisible0 (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setVisible0__funptr __funptr__;
__funptr__ = (prim_Excel_setVisible0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setStyle0__funptr) (void* arg1, MsoShadowStyle arg2);
long prim_Excel_setStyle0 (void* arg0, void* arg1, MsoShadowStyle* arg2)
{
long res;
prim_Excel_setStyle0__funptr __funptr__;
__funptr__ = (prim_Excel_setStyle0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setRotateWithShape__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setRotateWithShape (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setRotateWithShape__funptr __funptr__;
__funptr__ = (prim_Excel_setRotateWithShape__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAlignment__funptr) (void* arg1, MsoTextEffectAlignment arg2);
long prim_Excel_setAlignment (void* arg0, void* arg1, MsoTextEffectAlignment* arg2)
{
long res;
prim_Excel_setAlignment__funptr __funptr__;
__funptr__ = (prim_Excel_setAlignment__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setFontBold__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setFontBold (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setFontBold__funptr __funptr__;
__funptr__ = (prim_Excel_setFontBold__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setFontItalic__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setFontItalic (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setFontItalic__funptr __funptr__;
__funptr__ = (prim_Excel_setFontItalic__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setKernedPairs__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setKernedPairs (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setKernedPairs__funptr __funptr__;
__funptr__ = (prim_Excel_setKernedPairs__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setNormalizedHeight__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setNormalizedHeight (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setNormalizedHeight__funptr __funptr__;
__funptr__ = (prim_Excel_setNormalizedHeight__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetShape__funptr) (void* arg1, MsoPresetTextEffectShape arg2);
long prim_Excel_setPresetShape (void* arg0, void* arg1, MsoPresetTextEffectShape* arg2)
{
long res;
prim_Excel_setPresetShape__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetShape__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetTextEffect__funptr) (void* arg1, MsoPresetTextEffect arg2);
long prim_Excel_setPresetTextEffect (void* arg0, void* arg1, MsoPresetTextEffect* arg2)
{
long res;
prim_Excel_setPresetTextEffect__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetTextEffect__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setRotatedChars__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setRotatedChars (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setRotatedChars__funptr __funptr__;
__funptr__ = (prim_Excel_setRotatedChars__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setThreeDFormat__funptr) (void* arg1, MsoPresetThreeDFormat arg2);
long prim_Excel_setThreeDFormat (void* arg0, void* arg1, MsoPresetThreeDFormat* arg2)
{
long res;
prim_Excel_setThreeDFormat__funptr __funptr__;
__funptr__ = (prim_Excel_setThreeDFormat__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setExtrusionDirection__funptr) (void* arg1, MsoPresetExtrusionDirection arg2);
long prim_Excel_setExtrusionDirection (void* arg0, void* arg1, MsoPresetExtrusionDirection* arg2)
{
long res;
prim_Excel_setExtrusionDirection__funptr __funptr__;
__funptr__ = (prim_Excel_setExtrusionDirection__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setExtrusionColorType__funptr) (void* arg1, MsoExtrusionColorType arg2);
long prim_Excel_setExtrusionColorType (void* arg0, void* arg1, MsoExtrusionColorType* arg2)
{
long res;
prim_Excel_setExtrusionColorType__funptr __funptr__;
__funptr__ = (prim_Excel_setExtrusionColorType__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPerspective__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setPerspective (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setPerspective__funptr __funptr__;
__funptr__ = (prim_Excel_setPerspective__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetLightingDirection__funptr) (void* arg1, MsoPresetLightingDirection arg2);
long prim_Excel_setPresetLightingDirection (void* arg0, void* arg1, MsoPresetLightingDirection* arg2)
{
long res;
prim_Excel_setPresetLightingDirection__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetLightingDirection__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetLightingSoftness__funptr) (void* arg1, MsoPresetLightingSoftness arg2);
long prim_Excel_setPresetLightingSoftness (void* arg0, void* arg1, MsoPresetLightingSoftness* arg2)
{
long res;
prim_Excel_setPresetLightingSoftness__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetLightingSoftness__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetMaterial__funptr) (void* arg1, MsoPresetMaterial arg2);
long prim_Excel_setPresetMaterial (void* arg0, void* arg1, MsoPresetMaterial* arg2)
{
long res;
prim_Excel_setPresetMaterial__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetMaterial__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setVisible1__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setVisible1 (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setVisible1__funptr __funptr__;
__funptr__ = (prim_Excel_setVisible1__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetCamera__funptr) (void* arg1, MsoPresetCamera arg2);
long prim_Excel_setPresetCamera (void* arg0, void* arg1, MsoPresetCamera* arg2)
{
long res;
prim_Excel_setPresetCamera__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetCamera__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPresetLighting__funptr) (void* arg1, MsoLightRigType arg2);
long prim_Excel_setPresetLighting (void* arg0, void* arg1, MsoLightRigType* arg2)
{
long res;
prim_Excel_setPresetLighting__funptr __funptr__;
__funptr__ = (prim_Excel_setPresetLighting__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBevelTopType__funptr) (void* arg1, MsoBevelType arg2);
long prim_Excel_setBevelTopType (void* arg0, void* arg1, MsoBevelType* arg2)
{
long res;
prim_Excel_setBevelTopType__funptr __funptr__;
__funptr__ = (prim_Excel_setBevelTopType__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setBevelBottomType__funptr) (void* arg1, MsoBevelType arg2);
long prim_Excel_setBevelBottomType (void* arg0, void* arg1, MsoBevelType* arg2)
{
long res;
prim_Excel_setBevelBottomType__funptr __funptr__;
__funptr__ = (prim_Excel_setBevelBottomType__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setProjectText__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setProjectText (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setProjectText__funptr __funptr__;
__funptr__ = (prim_Excel_setProjectText__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_oneColorGradient__funptr) (void* arg1, MsoGradientStyle arg2, int arg3, float arg4);
long prim_Excel_oneColorGradient (void* arg0, void* arg1, MsoGradientStyle* arg2, int arg3, float arg4)
{
long res;
prim_Excel_oneColorGradient__funptr __funptr__;
__funptr__ = (prim_Excel_oneColorGradient__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_patterned__funptr) (void* arg1, MsoPatternType arg2);
long prim_Excel_patterned (void* arg0, void* arg1, MsoPatternType* arg2)
{
long res;
prim_Excel_patterned__funptr __funptr__;
__funptr__ = (prim_Excel_patterned__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_presetGradient__funptr) (void* arg1, MsoGradientStyle arg2, int arg3, MsoPresetGradientType arg4);
long prim_Excel_presetGradient (void* arg0, void* arg1, MsoGradientStyle* arg2, int arg3, MsoPresetGradientType* arg4)
{
long res;
prim_Excel_presetGradient__funptr __funptr__;
__funptr__ = (prim_Excel_presetGradient__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3, *arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_presetTextured__funptr) (void* arg1, MsoPresetTexture arg2);
long prim_Excel_presetTextured (void* arg0, void* arg1, MsoPresetTexture* arg2)
{
long res;
prim_Excel_presetTextured__funptr __funptr__;
__funptr__ = (prim_Excel_presetTextured__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_twoColorGradient__funptr) (void* arg1, MsoGradientStyle arg2, int arg3);
long prim_Excel_twoColorGradient (void* arg0, void* arg1, MsoGradientStyle* arg2, int arg3)
{
long res;
prim_Excel_twoColorGradient__funptr __funptr__;
__funptr__ = (prim_Excel_twoColorGradient__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_setVisible2__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setVisible2 (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setVisible2__funptr __funptr__;
__funptr__ = (prim_Excel_setVisible2__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTextureAlignment__funptr) (void* arg1, MsoTextureAlignment arg2);
long prim_Excel_setTextureAlignment (void* arg0, void* arg1, MsoTextureAlignment* arg2)
{
long res;
prim_Excel_setTextureAlignment__funptr __funptr__;
__funptr__ = (prim_Excel_setTextureAlignment__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTextureTile__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setTextureTile (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setTextureTile__funptr __funptr__;
__funptr__ = (prim_Excel_setTextureTile__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setRotateWithObject__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setRotateWithObject (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setRotateWithObject__funptr __funptr__;
__funptr__ = (prim_Excel_setRotateWithObject__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_addNode__funptr) (void* arg1, VARIANT arg2, MsoDiagramNodeType arg3, void* arg4);
long prim_Excel_addNode (void* arg0, void* arg1, VARIANT* arg2, MsoDiagramNodeType* arg3, void* arg4)
{
long res;
prim_Excel_addNode__funptr __funptr__;
__funptr__ = (prim_Excel_addNode__funptr)arg0;
res =__funptr__(arg1, *arg2, *arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_addNode0__funptr) (void* arg1, MsoRelativeNodePosition arg2, MsoDiagramNodeType arg3, void* arg4);
long prim_Excel_addNode0 (void* arg0, void* arg1, MsoRelativeNodePosition* arg2, MsoDiagramNodeType* arg3, void* arg4)
{
long res;
prim_Excel_addNode0__funptr __funptr__;
__funptr__ = (prim_Excel_addNode0__funptr)arg0;
res =__funptr__(arg1, *arg2, *arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_moveNode__funptr) (void* arg1, void* arg2, MsoRelativeNodePosition arg3);
long prim_Excel_moveNode (void* arg0, void* arg1, void* arg2, MsoRelativeNodePosition* arg3)
{
long res;
prim_Excel_moveNode__funptr __funptr__;
__funptr__ = (prim_Excel_moveNode__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_cloneNode__funptr) (void* arg1, VARIANT_BOOL arg2, void* arg3, MsoRelativeNodePosition arg4, void* arg5);
long prim_Excel_cloneNode (void* arg0, void* arg1, VARIANT_BOOL arg2, void* arg3, MsoRelativeNodePosition* arg4, void* arg5)
{
long res;
prim_Excel_cloneNode__funptr __funptr__;
__funptr__ = (prim_Excel_cloneNode__funptr)arg0;
res =__funptr__(arg1, arg2, arg3, *arg4, arg5);
return (res);
}
typedef long (__stdcall * prim_Excel_setLayout__funptr) (void* arg1, MsoOrgChartLayoutType arg2);
long prim_Excel_setLayout (void* arg0, void* arg1, MsoOrgChartLayoutType* arg2)
{
long res;
prim_Excel_setLayout__funptr __funptr__;
__funptr__ = (prim_Excel_setLayout__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setOrientation__funptr) (void* arg1, MsoTextOrientation arg2);
long prim_Excel_setOrientation (void* arg0, void* arg1, MsoTextOrientation* arg2)
{
long res;
prim_Excel_setOrientation__funptr __funptr__;
__funptr__ = (prim_Excel_setOrientation__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setHorizontalAnchor__funptr) (void* arg1, MsoHorizontalAnchor arg2);
long prim_Excel_setHorizontalAnchor (void* arg0, void* arg1, MsoHorizontalAnchor* arg2)
{
long res;
prim_Excel_setHorizontalAnchor__funptr __funptr__;
__funptr__ = (prim_Excel_setHorizontalAnchor__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setVerticalAnchor__funptr) (void* arg1, MsoVerticalAnchor arg2);
long prim_Excel_setVerticalAnchor (void* arg0, void* arg1, MsoVerticalAnchor* arg2)
{
long res;
prim_Excel_setVerticalAnchor__funptr __funptr__;
__funptr__ = (prim_Excel_setVerticalAnchor__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setPathFormat__funptr) (void* arg1, MsoPathFormat arg2);
long prim_Excel_setPathFormat (void* arg0, void* arg1, MsoPathFormat* arg2)
{
long res;
prim_Excel_setPathFormat__funptr __funptr__;
__funptr__ = (prim_Excel_setPathFormat__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setWarpFormat__funptr) (void* arg1, MsoWarpFormat arg2);
long prim_Excel_setWarpFormat (void* arg0, void* arg1, MsoWarpFormat* arg2)
{
long res;
prim_Excel_setWarpFormat__funptr __funptr__;
__funptr__ = (prim_Excel_setWarpFormat__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setWordArtformat__funptr) (void* arg1, MsoPresetTextEffect arg2);
long prim_Excel_setWordArtformat (void* arg0, void* arg1, MsoPresetTextEffect* arg2)
{
long res;
prim_Excel_setWordArtformat__funptr __funptr__;
__funptr__ = (prim_Excel_setWordArtformat__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setWordWrap__funptr) (void* arg1, MsoTriState arg2);
long prim_Excel_setWordWrap (void* arg0, void* arg1, MsoTriState* arg2)
{
long res;
prim_Excel_setWordWrap__funptr __funptr__;
__funptr__ = (prim_Excel_setWordWrap__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAutoSize__funptr) (void* arg1, MsoAutoSize arg2);
long prim_Excel_setAutoSize (void* arg0, void* arg1, MsoAutoSize* arg2)
{
long res;
prim_Excel_setAutoSize__funptr __funptr__;
__funptr__ = (prim_Excel_setAutoSize__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setFeatureInstall__funptr) (void* arg1, MsoFeatureInstall arg2);
long prim_Excel_setFeatureInstall (void* arg0, void* arg1, MsoFeatureInstall* arg2)
{
long res;
prim_Excel_setFeatureInstall__funptr __funptr__;
__funptr__ = (prim_Excel_setFeatureInstall__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setAutomationSecurity__funptr) (void* arg1, MsoAutomationSecurity arg2);
long prim_Excel_setAutomationSecurity (void* arg0, void* arg1, MsoAutomationSecurity* arg2)
{
long res;
prim_Excel_setAutomationSecurity__funptr __funptr__;
__funptr__ = (prim_Excel_setAutomationSecurity__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_getFileDialog__funptr) (void* arg1, MsoFileDialogType arg2, void* arg3);
long prim_Excel_getFileDialog (void* arg0, void* arg1, MsoFileDialogType* arg2, void* arg3)
{
long res;
prim_Excel_getFileDialog__funptr __funptr__;
__funptr__ = (prim_Excel_getFileDialog__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_location__funptr) (void* arg1, int arg2, VARIANT arg3, void* arg4);
long prim_Excel_location (void* arg0, void* arg1, int arg2, VARIANT* arg3, void* arg4)
{
long res;
prim_Excel_location__funptr __funptr__;
__funptr__ = (prim_Excel_location__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_setElement__funptr) (void* arg1, MsoChartElementType arg2);
long prim_Excel_setElement (void* arg0, void* arg1, MsoChartElementType* arg2)
{
long res;
prim_Excel_setElement__funptr __funptr__;
__funptr__ = (prim_Excel_setElement__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_reloadAs__funptr) (void* arg1, MsoEncoding arg2);
long prim_Excel_reloadAs (void* arg0, void* arg1, MsoEncoding* arg2)
{
long res;
prim_Excel_reloadAs__funptr __funptr__;
__funptr__ = (prim_Excel_reloadAs__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_add7__funptr) (void* arg1, VARIANT arg2, long arg3, void* arg4);
long prim_Excel_add7 (void* arg0, void* arg1, VARIANT* arg2, long arg3, void* arg4)
{
long res;
prim_Excel_add7__funptr __funptr__;
__funptr__ = (prim_Excel_add7__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_getItem12__funptr) (void* arg1, VARIANT arg2, void* arg3);
long prim_Excel_getItem12 (void* arg0, void* arg1, VARIANT* arg2, void* arg3)
{
long res;
prim_Excel_getItem12__funptr __funptr__;
__funptr__ = (prim_Excel_getItem12__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_open1__funptr) (void* arg1, void* arg2, VARIANT arg3, VARIANT arg4, VARIANT arg5, VARIANT arg6, VARIANT arg7, VARIANT arg8, VARIANT arg9, VARIANT arg10, VARIANT arg11, VARIANT arg12, VARIANT arg13, VARIANT arg14, long arg15, void* arg16);
long prim_Excel_open1 (void* arg0, void* arg1, void* arg2, VARIANT* arg3, VARIANT* arg4, VARIANT* arg5, VARIANT* arg6, VARIANT* arg7, VARIANT* arg8, VARIANT* arg9, VARIANT* arg10, VARIANT* arg11, VARIANT* arg12, VARIANT* arg13, VARIANT* arg14, long arg15, void* arg16)
{
long res;
prim_Excel_open1__funptr __funptr__;
__funptr__ = (prim_Excel_open1__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, *arg4, *arg5, *arg6, *arg7, *arg8, *arg9, *arg10, *arg11, *arg12, *arg13, *arg14, arg15, arg16);
return (res);
}
typedef long (__stdcall * prim_Excel_getDefault13__funptr) (void* arg1, VARIANT arg2, void* arg3);
long prim_Excel_getDefault13 (void* arg0, void* arg1, VARIANT* arg2, void* arg3)
{
long res;
prim_Excel_getDefault13__funptr __funptr__;
__funptr__ = (prim_Excel_getDefault13__funptr)arg0;
res =__funptr__(arg1, *arg2, arg3);
return (res);
}
typedef long (__stdcall * prim_Excel_open2__funptr) (void* arg1, void* arg2, VARIANT arg3, VARIANT arg4, VARIANT arg5, VARIANT arg6, VARIANT arg7, VARIANT arg8, VARIANT arg9, VARIANT arg10, VARIANT arg11, VARIANT arg12, VARIANT arg13, VARIANT arg14, VARIANT arg15, VARIANT arg16, long arg17, void* arg18);
long prim_Excel_open2 (void* arg0, void* arg1, void* arg2, VARIANT* arg3, VARIANT* arg4, VARIANT* arg5, VARIANT* arg6, VARIANT* arg7, VARIANT* arg8, VARIANT* arg9, VARIANT* arg10, VARIANT* arg11, VARIANT* arg12, VARIANT* arg13, VARIANT* arg14, VARIANT* arg15, VARIANT* arg16, long arg17, void* arg18)
{
long res;
prim_Excel_open2__funptr __funptr__;
__funptr__ = (prim_Excel_open2__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, *arg4, *arg5, *arg6, *arg7, *arg8, *arg9, *arg10, *arg11, *arg12, *arg13, *arg14, *arg15, *arg16, arg17, arg18);
return (res);
}
typedef long (__stdcall * prim_Excel_openDatabase__funptr) (void* arg1, void* arg2, VARIANT arg3, VARIANT arg4, VARIANT arg5, VARIANT arg6, void* arg7);
long prim_Excel_openDatabase (void* arg0, void* arg1, void* arg2, VARIANT* arg3, VARIANT* arg4, VARIANT* arg5, VARIANT* arg6, void* arg7)
{
long res;
prim_Excel_openDatabase__funptr __funptr__;
__funptr__ = (prim_Excel_openDatabase__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, *arg4, *arg5, *arg6, arg7);
return (res);
}
typedef long (__stdcall * prim_Excel_openXML__funptr) (void* arg1, void* arg2, VARIANT arg3, void* arg4);
long prim_Excel_openXML (void* arg0, void* arg1, void* arg2, VARIANT* arg3, void* arg4)
{
long res;
prim_Excel_openXML__funptr __funptr__;
__funptr__ = (prim_Excel_openXML__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, arg4);
return (res);
}
typedef long (__stdcall * prim_Excel_openXML0__funptr) (void* arg1, void* arg2, VARIANT arg3, VARIANT arg4, void* arg5);
long prim_Excel_openXML0 (void* arg0, void* arg1, void* arg2, VARIANT* arg3, VARIANT* arg4, void* arg5)
{
long res;
prim_Excel_openXML0__funptr __funptr__;
__funptr__ = (prim_Excel_openXML0__funptr)arg0;
res =__funptr__(arg1, arg2, *arg3, *arg4, arg5);
return (res);
}
typedef long (__stdcall * prim_Excel_setScreenSize__funptr) (void* arg1, MsoScreenSize arg2);
long prim_Excel_setScreenSize (void* arg0, void* arg1, MsoScreenSize* arg2)
{
long res;
prim_Excel_setScreenSize__funptr __funptr__;
__funptr__ = (prim_Excel_setScreenSize__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setEncoding__funptr) (void* arg1, MsoEncoding arg2);
long prim_Excel_setEncoding (void* arg0, void* arg1, MsoEncoding* arg2)
{
long res;
prim_Excel_setEncoding__funptr __funptr__;
__funptr__ = (prim_Excel_setEncoding__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTargetBrowser__funptr) (void* arg1, MsoTargetBrowser arg2);
long prim_Excel_setTargetBrowser (void* arg0, void* arg1, MsoTargetBrowser* arg2)
{
long res;
prim_Excel_setTargetBrowser__funptr __funptr__;
__funptr__ = (prim_Excel_setTargetBrowser__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setScreenSize0__funptr) (void* arg1, MsoScreenSize arg2);
long prim_Excel_setScreenSize0 (void* arg0, void* arg1, MsoScreenSize* arg2)
{
long res;
prim_Excel_setScreenSize0__funptr __funptr__;
__funptr__ = (prim_Excel_setScreenSize0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setEncoding0__funptr) (void* arg1, MsoEncoding arg2);
long prim_Excel_setEncoding0 (void* arg0, void* arg1, MsoEncoding* arg2)
{
long res;
prim_Excel_setEncoding0__funptr __funptr__;
__funptr__ = (prim_Excel_setEncoding0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
typedef long (__stdcall * prim_Excel_setTargetBrowser0__funptr) (void* arg1, MsoTargetBrowser arg2);
long prim_Excel_setTargetBrowser0 (void* arg0, void* arg1, MsoTargetBrowser* arg2)
{
long res;
prim_Excel_setTargetBrowser0__funptr __funptr__;
__funptr__ = (prim_Excel_setTargetBrowser0__funptr)arg0;
res =__funptr__(arg1, *arg2);
return (res);
}
