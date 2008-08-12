/*
---------------------------------------------------------------------------
Open Asset Import Library (ASSIMP)
---------------------------------------------------------------------------

Copyright (c) 2006-2008, ASSIMP Development Team

All rights reserved.

Redistribution and use of this software in source and binary forms, 
with or without modification, are permitted provided that the following 
conditions are met:

* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.

* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.

* Neither the name of the ASSIMP team, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission of the ASSIMP Development Team.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
---------------------------------------------------------------------------
*/

/** @file Defines constants for configurable properties */
#ifndef AI_CONFIG_H_INC
#define AI_CONFIG_H_INC

// ---------------------------------------------------------------------------
/** \brief Set the maximum number of vertices in a mesh.
 *
 * This is used by the "SplitLargeMeshes" PostProcess-Step to determine
 * whether a mesh must be splitted or not.
 * \note The default value is AI_SLM_DEFAULT_MAX_VERTICES, defined in
 *       the internal header file SplitLargeMeshes.h
 */
#define AI_CONFIG_PP_SLM_TRIANGLE_LIMIT	"pp.slm.triangle_limit"


// ---------------------------------------------------------------------------
/** \brief Set the maximum number of triangles in a mesh.
 *
 * This is used by the "SplitLargeMeshes" PostProcess-Step to determine
 * whether a mesh must be splitted or not.
 * \note The default value is AI_SLM_DEFAULT_MAX_TRIANGLES, defined in
 *       the internal header file SplitLargeMeshes.h
 */
#define AI_CONFIG_PP_SLM_VERTEX_LIMIT	"pp.slm.vertex_limit"


// ---------------------------------------------------------------------------
/** \brief Set the maximum number of bones affecting a single vertex
 *
 * This is used by the aiProcess_LimitBoneWeights PostProcess-Step.
 * \note The default value is AI_LBW_MAX_WEIGHTS, defined in
 *       the internal header file LimitBoneWeightsProcess.h
 */
#define AI_CONFIG_PP_LBW_MAX_WEIGHTS	"pp.lbw.weights_limit"


// ---------------------------------------------------------------------------
/** \brief Set the vertex animation keyframe to be imported
 *
 * ASSIMP does not support vertex keyframes (only bone animation is supported).
 * The library reads only one frame of models with vertex animations.
 * By default this is the first frame�.
 * \note The default value is 0. This option applies to all importers.
 *   However, it is also possible to override the global setting
 *   for a specific loader. You can use the AI_CONFIG_IMPORT_XXX_KEYFRAME
 *   options (where XXX is a placeholder for the file format for which you
 *   want to override the global setting).
 */
#define AI_CONFIG_IMPORT_GLOBAL_KEYFRAME	"imp.global.kf"

#define AI_CONFIG_IMPORT_MD3_KEYFRAME		"imp.md3.kf"
#define AI_CONFIG_IMPORT_MD2_KEYFRAME		"imp.md2.kf"
#define AI_CONFIG_IMPORT_MDL_KEYFRAME		"imp.mdl.kf"
#define AI_CONFIG_IMPORT_MDC_KEYFRAME		"imp.mdc.kf"
#define AI_CONFIG_IMPORT_MDR_KEYFRAME		"imp.mdr.kf"
#define AI_CONFIG_IMPORT_SMD_KEYFRAME		"imp.smd.kf"


// ---------------------------------------------------------------------------
/** \brief Causes the 3DS loader to ignore pivot points in the file
 *
 * There are some faulty 3DS files which look only correctly with
 * pivot points disabled 
 */
#define AI_CONFIG_IMPORT_3DS_IGNORE_PIVOT	"imp.3ds.nopivot"

// ---------------------------------------------------------------------------
/** \brief Specifies the maximum angle that may be between two vertex tangents
 *         that their tangents and bitangents are smoothed.
 *
 * This applies to the CalcTangentSpace-Step. The angle is specified
 * in degrees * 1000, so 180000 is PI. The default value is
 * 45 degrees. The maximum value is 180000.
 */
#define AI_CONFIG_PP_CT_MAX_SMOOTHING_ANGLE "pp.ct.max_smoothing"

// ---------------------------------------------------------------------------
/** \brief Specifies the maximum angle that may be between two face normals
 *         at the same vertex position that their are smoothed.
 *
 * This applies to the GenSmoothNormals-Step. The angle is specified
 * in degrees * 1000, so 180000 is PI. The default value is
 * 180 degrees (all vertex normals are smoothed). The maximum value is 180000
 * \note This can be manually overriden by loaders via #aiMesh::mMaxSmoothingAngle;
 */
#define AI_CONFIG_PP_GSN_MAX_SMOOTHING_ANGLE "pp.gsn.max_smoothing"


#define AI_CONFIG_PP_OG_MAX_DEPTH			"pp.og.max_depth"
#define AI_CONFIG_PP_OG_MIN_TRIS_PER_NODE	"pp.og.min_tris"
#define AI_CONFIG_PP_OG_MAXIMALLY_SMALL		"pp.og.maximally_small"

#endif // !! AI_CONFIG_H_INC