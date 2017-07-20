/**
 * Mandelbulber v2, a 3D fractal generator       ,=#MKNmMMKmmßMNWy,
 *                                             ,B" ]L,,p%%%,,,§;, "K
 * Copyright (C) 2017 Mandelbulber Team        §R-==%w["'~5]m%=L.=~5N
 *                                        ,=mm=§M ]=4 yJKA"/-Nsaj  "Bw,==,,
 * This file is part of Mandelbulber.    §R.r= jw",M  Km .mM  FW ",§=ß., ,TN
 *                                     ,4R =%["w[N=7]J '"5=],""]]M,w,-; T=]M
 * Mandelbulber is free software:     §R.ß~-Q/M=,=5"v"]=Qf,'§"M= =,M.§ Rz]M"Kw
 * you can redistribute it and/or     §w "xDY.J ' -"m=====WeC=\ ""%""y=%"]"" §
 * modify it under the terms of the    "§M=M =D=4"N #"%==A%p M§ M6  R' #"=~.4M
 * GNU General Public License as        §W =, ][T"]C  §  § '§ e===~ U  !§[Z ]N
 * published by the                    4M",,Jm=,"=e~  §  §  j]]""N  BmM"py=ßM
 * Free Software Foundation,          ]§ T,M=& 'YmMMpM9MMM%=w=,,=MT]M m§;'§,
 * either version 3 of the License,    TWw [.j"5=~N[=§%=%W,T ]R,"=="Y[LFT ]N
 * or (at your option)                   TW=,-#"%=;[  =Q:["V""  ],,M.m == ]N
 * any later version.                      J§"mr"] ,=,," =="""J]= M"M"]==ß"
 *                                          §= "=C=4 §"eM "=B:m|4"]#F,§~
 * Mandelbulber is distributed in            "9w=,,]w em%wJ '"~" ,=,,ß"
 * the hope that it will be useful,                 . "K=  ,=RMMMßM"""
 * but WITHOUT ANY WARRANTY;                            .'''
 * without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with Mandelbulber. If not, see <http://www.gnu.org/licenses/>.
 *
 * ###########################################################################
 *
 * Authors: Krzysztof Marczak (buddhi1980@gmail.com)
 *
 * sParamRenderCl struct - container for scene parameters
 *       ____                   ________
 *      / __ \____  ___  ____  / ____/ /
 *     / / / / __ \/ _ \/ __ \/ /   / /
 *    / /_/ / /_/ /  __/ / / / /___/ /___
 *    \____/ .___/\___/_/ /_/\____/_____/
 *        /_/
 *
 * This file has been autogenerated by tools/populateOpenCL.php
 * from the file src/fractparams.hpp
 * D O    N O T    E D I T    T H I S    F I L E !
 */

#ifndef MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_
#define MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_

#ifndef OPENCL_KERNEL_CODE
#include "../src/fractal_enums.h"
#include "../opencl/opencl_algebra.h"
#include "../opencl/common_params_cl.hpp"
#include "../opencl/image_adjustments_cl.h"
#include "../src/common_params.hpp"
#include "../src/image_adjustments.h"
#include "../src/fractparams.hpp"
#include "../src/fractal.h"
#endif /* OPENCL_KERNEL_CODE */

typedef struct
{
	// constructor with init

	cl_int antialiasingSize;
	cl_int ambientOcclusionQuality; // ambient occlusion quality
	cl_int auxLightNumber;
	cl_int auxLightRandomNumber;
	cl_int auxLightRandomSeed;
	cl_int frameNo;
	cl_int imageHeight; // image height
	cl_int imageWidth;	// image width
	cl_int formulaMaterialId[NUMBER_OF_FRACTALS];
	cl_int minN; // minimum number of iterations
	cl_int N;
	cl_int reflectionsMax;
	cl_int repeatFrom;
	cl_int DOFNumberOfPasses;
	cl_int DOFSamples;
	cl_int DOFMinSamples;

	cl_int perspectiveType;
	cl_int ambientOcclusionMode;
	cl_int texturedBackgroundMapType;
	cl_int booleanOperator[NUMBER_OF_FRACTALS - 1];
	cl_int delta_DE_method;
	cl_int delta_DE_function;

	cl_int antialiasingEnabled;
	cl_int ambientOcclusionEnabled; // enable global illumination
	cl_int auxLightPreEnabled[4];
	cl_int auxLightRandomEnabled;
	cl_int booleanOperatorsEnabled;
	cl_int constantDEThreshold;
	cl_int DOFEnabled;
	cl_int DOFHDRMode;
	cl_int DOFMonteCarlo;
	cl_int envMappingEnable;
	cl_int fakeLightsEnabled;
	cl_int fogEnabled;
	cl_int glowEnabled;
	cl_int hdrBlurEnabled;
	cl_int hybridFractalEnable;
	cl_int interiorMode;
	cl_int iterThreshMode;
	cl_int iterFogEnabled;
	cl_int legacyCoordinateSystem;
	cl_int limitsEnabled; // enable limits (intersections)
	cl_int mainLightEnable;
	cl_int mainLightPositionAsRelative;
	cl_int penetratingLights;
	cl_int raytracedReflections;
	cl_int shadow;			// enable shadows
	cl_int slowShading; // enable fake gradient calculation for shading
	cl_int SSAO_random_mode;
	cl_int texturedBackground; // enable textured background
	cl_int useDefaultBailout;
	cl_int volumetricLightEnabled[5];
	cl_int volumetricLightAnyEnabled;
	cl_int volFogEnabled;

	cl_float3 auxLightPreColour[4];
	cl_float3 background_color1; // background colour
	cl_float3 background_color2;
	cl_float3 background_color3;
	cl_float3 fakeLightsColor;
	cl_float3 fogColor;
	cl_float3 glowColor1;
	cl_float3 glowColor2;
	cl_float3 iterFogColour1;
	cl_float3 iterFogColour2;
	cl_float3 iterFogColour3;
	cl_float3 mainLightColour;
	cl_float3 volFogColour1;
	cl_float3 volFogColour2;
	cl_float3 volFogColour3;

	cl_float ambientOcclusion;
	cl_float ambientOcclusionFastTune;
	cl_float auxLightPreIntensity[4];
	cl_float auxLightVisibility;
	cl_float auxLightVisibilitySize;
	cl_float auxLightRandomRadius;
	cl_float auxLightRandomMaxDistanceFromFractal;
	cl_float auxLightRandomIntensity;
	cl_float background_brightness;
	cl_float backgroundHScale;
	cl_float backgroundVScale;
	cl_float backgroundTextureOffsetX;
	cl_float backgroundTextureOffsetY;
	cl_float cameraDistanceToTarget; // zoom
	cl_float constantFactor;
	cl_float DEFactor;		// factor for distance estimation steps
	cl_float detailLevel; // DE threshold factor
	cl_float DEThresh;
	cl_float DOFFocus;
	cl_float DOFRadius;
	cl_float DOFBlurOpacity;
	cl_float DOFMaxNoise;
	cl_float fakeLightsIntensity;
	cl_float fakeLightsVisibility;
	cl_float fakeLightsVisibilitySize;
	cl_float fogVisibility;
	cl_float formulaScale[NUMBER_OF_FRACTALS];
	cl_float fov; // perspective factor
	cl_float glowIntensity;
	cl_float hdrBlurIntensity;
	cl_float hdrBlurRadius;
	cl_float iterFogColor1Maxiter;
	cl_float iterFogColor2Maxiter;
	cl_float iterFogOpacity;
	cl_float iterFogOpacityTrim;
	cl_float mainLightAlpha;
	cl_float mainLightBeta;
	cl_float mainLightIntensity;
	cl_float mainLightVisibility;
	cl_float mainLightVisibilitySize;
	cl_float resolution; // resolution of image in fractal coordinates
	cl_float shadowConeAngle;
	cl_float smoothness;
	cl_float stereoEyeDistance;
	cl_float stereoInfiniteCorrection;
	cl_float sweetSpotHAngle;
	cl_float sweetSpotVAngle;
	cl_float viewDistanceMax;
	cl_float viewDistanceMin;
	cl_float volFogColour1Distance;
	cl_float volFogColour2Distance;
	cl_float volFogDensity;
	cl_float volFogDistanceFactor;
	cl_float volumetricLightIntensity[5];

	sImageAdjustmentsCl imageAdjustments;

	cl_float3 auxLightPre[4];
	cl_float3 auxLightRandomCenter;
	cl_float3 backgroundRotation;
	cl_float3 formulaPosition[NUMBER_OF_FRACTALS];
	cl_float3 formulaRotation[NUMBER_OF_FRACTALS];
	cl_float3 formulaRepeat[NUMBER_OF_FRACTALS];
	cl_float3 limitMin;
	cl_float3 limitMax;
	cl_float3 repeat;
	cl_float3 target;
	cl_float3 camera; // view point
	cl_float3 viewAngle;
	cl_float3 topVector;

	matrix33 mRotFormulaRotation[NUMBER_OF_FRACTALS];
	matrix33 mRotBackgroundRotation;

	sCommonParamsCl common;
} sParamRenderCl;

#ifndef OPENCL_KERNEL_CODE
inline sParamRenderCl clCopySParamRenderCl(sParamRender &source)
{
	sParamRenderCl target;
	target.antialiasingSize = source.antialiasingSize;
	target.ambientOcclusionQuality = source.ambientOcclusionQuality;
	target.auxLightNumber = source.auxLightNumber;
	target.auxLightRandomNumber = source.auxLightRandomNumber;
	target.auxLightRandomSeed = source.auxLightRandomSeed;
	target.frameNo = source.frameNo;
	target.imageHeight = source.imageHeight;
	target.imageWidth = source.imageWidth;
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.formulaMaterialId[i] = source.formulaMaterialId[i];
	}
	target.minN = source.minN;
	target.N = source.N;
	target.reflectionsMax = source.reflectionsMax;
	target.repeatFrom = source.repeatFrom;
	target.DOFNumberOfPasses = source.DOFNumberOfPasses;
	target.DOFSamples = source.DOFSamples;
	target.DOFMinSamples = source.DOFMinSamples;
	target.perspectiveType = source.perspectiveType;
	target.ambientOcclusionMode = source.ambientOcclusionMode;
	target.texturedBackgroundMapType = source.texturedBackgroundMapType;
	target.delta_DE_method = source.delta_DE_method;
	target.delta_DE_function = source.delta_DE_function;
	target.antialiasingEnabled = source.antialiasingEnabled;
	target.ambientOcclusionEnabled = source.ambientOcclusionEnabled;
	for (int i = 0; i < 4; i++)
	{
		target.auxLightPreEnabled[i] = source.auxLightPreEnabled[i];
	}
	target.auxLightRandomEnabled = source.auxLightRandomEnabled;
	target.booleanOperatorsEnabled = source.booleanOperatorsEnabled;
	target.constantDEThreshold = source.constantDEThreshold;
	target.DOFEnabled = source.DOFEnabled;
	target.DOFHDRMode = source.DOFHDRMode;
	target.DOFMonteCarlo = source.DOFMonteCarlo;
	target.envMappingEnable = source.envMappingEnable;
	target.fakeLightsEnabled = source.fakeLightsEnabled;
	target.fogEnabled = source.fogEnabled;
	target.glowEnabled = source.glowEnabled;
	target.hdrBlurEnabled = source.hdrBlurEnabled;
	target.hybridFractalEnable = source.hybridFractalEnable;
	target.interiorMode = source.interiorMode;
	target.iterThreshMode = source.iterThreshMode;
	target.iterFogEnabled = source.iterFogEnabled;
	target.legacyCoordinateSystem = source.legacyCoordinateSystem;
	target.limitsEnabled = source.limitsEnabled;
	target.mainLightEnable = source.mainLightEnable;
	target.mainLightPositionAsRelative = source.mainLightPositionAsRelative;
	target.penetratingLights = source.penetratingLights;
	target.raytracedReflections = source.raytracedReflections;
	target.shadow = source.shadow;
	target.slowShading = source.slowShading;
	target.SSAO_random_mode = source.SSAO_random_mode;
	target.texturedBackground = source.texturedBackground;
	target.useDefaultBailout = source.useDefaultBailout;
	for (int i = 0; i < 5; i++)
	{
		target.volumetricLightEnabled[i] = source.volumetricLightEnabled[i];
	}
	target.volumetricLightAnyEnabled = source.volumetricLightAnyEnabled;
	target.volFogEnabled = source.volFogEnabled;
	for (int i = 0; i < 4; i++)
	{
		target.auxLightPreColour[i] = toClFloat3(source.auxLightPreColour[i]);
	}
	target.background_color1 = toClFloat3(source.background_color1);
	target.background_color2 = toClFloat3(source.background_color2);
	target.background_color3 = toClFloat3(source.background_color3);
	target.fakeLightsColor = toClFloat3(source.fakeLightsColor);
	target.fogColor = toClFloat3(source.fogColor);
	target.glowColor1 = toClFloat3(source.glowColor1);
	target.glowColor2 = toClFloat3(source.glowColor2);
	target.iterFogColour1 = toClFloat3(source.iterFogColour1);
	target.iterFogColour2 = toClFloat3(source.iterFogColour2);
	target.iterFogColour3 = toClFloat3(source.iterFogColour3);
	target.mainLightColour = toClFloat3(source.mainLightColour);
	target.volFogColour1 = toClFloat3(source.volFogColour1);
	target.volFogColour2 = toClFloat3(source.volFogColour2);
	target.volFogColour3 = toClFloat3(source.volFogColour3);
	target.ambientOcclusion = source.ambientOcclusion;
	target.ambientOcclusionFastTune = source.ambientOcclusionFastTune;
	for (int i = 0; i < 4; i++)
	{
		target.auxLightPreIntensity[i] = source.auxLightPreIntensity[i];
	}
	target.auxLightVisibility = source.auxLightVisibility;
	target.auxLightVisibilitySize = source.auxLightVisibilitySize;
	target.auxLightRandomRadius = source.auxLightRandomRadius;
	target.auxLightRandomMaxDistanceFromFractal = source.auxLightRandomMaxDistanceFromFractal;
	target.auxLightRandomIntensity = source.auxLightRandomIntensity;
	target.background_brightness = source.background_brightness;
	target.backgroundHScale = source.backgroundHScale;
	target.backgroundVScale = source.backgroundVScale;
	target.backgroundTextureOffsetX = source.backgroundTextureOffsetX;
	target.backgroundTextureOffsetY = source.backgroundTextureOffsetY;
	target.cameraDistanceToTarget = source.cameraDistanceToTarget;
	target.constantFactor = source.constantFactor;
	target.DEFactor = source.DEFactor;
	target.detailLevel = source.detailLevel;
	target.DEThresh = source.DEThresh;
	target.DOFFocus = source.DOFFocus;
	target.DOFRadius = source.DOFRadius;
	target.DOFBlurOpacity = source.DOFBlurOpacity;
	target.DOFMaxNoise = source.DOFMaxNoise;
	target.fakeLightsIntensity = source.fakeLightsIntensity;
	target.fakeLightsVisibility = source.fakeLightsVisibility;
	target.fakeLightsVisibilitySize = source.fakeLightsVisibilitySize;
	target.fogVisibility = source.fogVisibility;
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.formulaScale[i] = source.formulaScale[i];
	}
	target.fov = source.fov;
	target.glowIntensity = source.glowIntensity;
	target.hdrBlurIntensity = source.hdrBlurIntensity;
	target.hdrBlurRadius = source.hdrBlurRadius;
	target.iterFogColor1Maxiter = source.iterFogColor1Maxiter;
	target.iterFogColor2Maxiter = source.iterFogColor2Maxiter;
	target.iterFogOpacity = source.iterFogOpacity;
	target.iterFogOpacityTrim = source.iterFogOpacityTrim;
	target.mainLightAlpha = source.mainLightAlpha;
	target.mainLightBeta = source.mainLightBeta;
	target.mainLightIntensity = source.mainLightIntensity;
	target.mainLightVisibility = source.mainLightVisibility;
	target.mainLightVisibilitySize = source.mainLightVisibilitySize;
	target.resolution = source.resolution;
	target.shadowConeAngle = source.shadowConeAngle;
	target.smoothness = source.smoothness;
	target.stereoEyeDistance = source.stereoEyeDistance;
	target.stereoInfiniteCorrection = source.stereoInfiniteCorrection;
	target.sweetSpotHAngle = source.sweetSpotHAngle;
	target.sweetSpotVAngle = source.sweetSpotVAngle;
	target.viewDistanceMax = source.viewDistanceMax;
	target.viewDistanceMin = source.viewDistanceMin;
	target.volFogColour1Distance = source.volFogColour1Distance;
	target.volFogColour2Distance = source.volFogColour2Distance;
	target.volFogDensity = source.volFogDensity;
	target.volFogDistanceFactor = source.volFogDistanceFactor;
	for (int i = 0; i < 5; i++)
	{
		target.volumetricLightIntensity[i] = source.volumetricLightIntensity[i];
	}
	target.imageAdjustments = clCopySImageAdjustmentsCl(source.imageAdjustments);
	for (int i = 0; i < 4; i++)
	{
		target.auxLightPre[i] = toClFloat3(source.auxLightPre[i]);
	}
	target.auxLightRandomCenter = toClFloat3(source.auxLightRandomCenter);
	target.backgroundRotation = toClFloat3(source.backgroundRotation);
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.formulaPosition[i] = toClFloat3(source.formulaPosition[i]);
	}
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.formulaRotation[i] = toClFloat3(source.formulaRotation[i]);
	}
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.formulaRepeat[i] = toClFloat3(source.formulaRepeat[i]);
	}
	target.limitMin = toClFloat3(source.limitMin);
	target.limitMax = toClFloat3(source.limitMax);
	target.repeat = toClFloat3(source.repeat);
	target.target = toClFloat3(source.target);
	target.camera = toClFloat3(source.camera);
	target.viewAngle = toClFloat3(source.viewAngle);
	target.topVector = toClFloat3(source.topVector);
	for (int i = 0; i < NUMBER_OF_FRACTALS; i++)
	{
		target.mRotFormulaRotation[i] = toClMatrix33(source.mRotFormulaRotation[i]);
	}
	target.mRotBackgroundRotation = toClMatrix33(source.mRotBackgroundRotation);
	target.common = clCopySCommonParamsCl(source.common);
	return target;
}
#endif /* OPENCL_KERNEL_CODE */

#endif /* MANDELBULBER2_OPENCL_FRACTPARAMS_CL_HPP_ */
