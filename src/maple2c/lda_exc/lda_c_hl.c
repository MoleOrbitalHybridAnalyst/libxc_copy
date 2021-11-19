/*
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_hl.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t6, t7, t8, t11;
  double t12, t13, t14, t15, t16, t17, t18, t19;
  double t23, t24, t26, t27, t28, t30, t31, t35;
  double t36, t38, t39, t44, t46, t48, t51, t55;
  double t56, t57, t58, t59, t60, t63, t67, t68;
  double t70, t74, t81;

#ifndef XC_DONT_COMPILE_VXC
  double t82, t83, t84, t85, t89, t90, t91, t97;
  double t103, t108, t109, t113, t114, t115, t128;

#ifndef XC_DONT_COMPILE_FXC
  double t133, t134, t135, t139, t140, t143, t150, t151;
  double t152, t153, t154, t158, t164, t169, t174, t181;
  double t182, t183, t184, t197;

#ifndef XC_DONT_COMPILE_KXC
  double t202, t203, t204, t208, t209, t214, t215, t217;
  double t219, t228, t231, t235, t239, t244, t252, t261;
  double t264, t277;

#ifndef XC_DONT_COMPILE_LXC
  double t284, t288, t289, t294, t295, t311, t314, t317;
  double t321, t325, t330, t351, t354;
#endif

#endif

#endif

#endif

#endif


  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->hl_c[0];
  t2 = 0.1e1 / M_PI;
  t4 = t2 / rho[0];
  t5 = params->hl_r[0];
  t6 = t5 * t5;
  t7 = t6 * t5;
  t8 = 0.1e1 / t7;
  t11 = 0.1e1 + 0.3e1 / 0.4e1 * t4 * t8;
  t12 = M_CBRT3;
  t13 = t12 * t12;
  t14 = POW_1_3(t2);
  t15 = 0.1e1 / t14;
  t16 = t13 * t15;
  t17 = M_CBRT4;
  t18 = POW_1_3(rho[0]);
  t19 = t17 * t18;
  t23 = 0.1e1 + t16 * t19 * t5 / 0.3e1;
  t24 = log(t23);
  t26 = t14 * t14;
  t27 = t13 * t26;
  t28 = t18 * t18;
  t30 = t17 / t28;
  t31 = 0.1e1 / t6;
  t35 = t12 * t14;
  t36 = t17 * t17;
  t38 = t36 / t18;
  t39 = 0.1e1 / t5;
  t44 = t1 * (t11 * t24 - t27 * t30 * t31 / 0.4e1 + t35 * t38 * t39 / 0.8e1 - 0.1e1 / 0.3e1);
  t46 = POW_1_3(p->zeta_threshold);
  t48 = my_piecewise3(0.1e1 <= p->zeta_threshold, t46 * p->zeta_threshold, 1);
  t51 = M_CBRT2;
  t55 = (0.2e1 * t48 - 0.2e1) / (0.2e1 * t51 - 0.2e1);
  t56 = params->hl_c[1];
  t57 = params->hl_r[1];
  t58 = t57 * t57;
  t59 = t58 * t57;
  t60 = 0.1e1 / t59;
  t63 = 0.1e1 + 0.3e1 / 0.4e1 * t4 * t60;
  t67 = 0.1e1 + t16 * t19 * t57 / 0.3e1;
  t68 = log(t67);
  t70 = 0.1e1 / t58;
  t74 = 0.1e1 / t57;
  t81 = t55 * (-t56 * (t63 * t68 - t27 * t30 * t70 / 0.4e1 + t35 * t38 * t74 / 0.8e1 - 0.1e1 / 0.3e1) + t44);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t44 + t81;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t82 = rho[0] * rho[0];
  t83 = 0.1e1 / t82;
  t84 = t2 * t83;
  t85 = t8 * t24;
  t89 = t11 * t13 * t15;
  t90 = 0.1e1 / t23;
  t91 = t5 * t90;
  t97 = t17 / t28 / rho[0];
  t103 = t36 / t18 / rho[0];
  t108 = t1 * (-0.3e1 / 0.4e1 * t84 * t85 + t89 * t30 * t91 / 0.9e1 + t27 * t97 * t31 / 0.6e1 - t35 * t103 * t39 / 0.24e2);
  t109 = t60 * t68;
  t113 = t63 * t13 * t15;
  t114 = 0.1e1 / t67;
  t115 = t57 * t114;
  t128 = t55 * (-t56 * (-0.3e1 / 0.4e1 * t84 * t109 + t113 * t30 * t115 / 0.9e1 + t27 * t97 * t70 / 0.6e1 - t35 * t103 * t74 / 0.24e2) + t108);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t44 + t81 + rho[0] * (-t108 + t128);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t133 = t82 * rho[0];
  t134 = 0.1e1 / t133;
  t135 = t2 * t134;
  t139 = 0.1e1 / t28 / t82;
  t140 = t2 * t139;
  t143 = t16 * t17 * t90;
  t150 = 0.1e1 / t26;
  t151 = t11 * t12 * t150;
  t152 = t23 * t23;
  t153 = 0.1e1 / t152;
  t154 = t6 * t153;
  t158 = t17 * t139;
  t164 = t36 / t18 / t82;
  t169 = t1 * (0.3e1 / 0.2e1 * t135 * t85 - t140 * t31 * t143 / 0.6e1 - 0.2e1 / 0.27e2 * t89 * t97 * t91 - t151 * t103 * t154 / 0.27e2 - 0.5e1 / 0.18e2 * t27 * t158 * t31 + t35 * t164 * t39 / 0.18e2);
  t174 = t16 * t17 * t114;
  t181 = t63 * t12 * t150;
  t182 = t67 * t67;
  t183 = 0.1e1 / t182;
  t184 = t58 * t183;
  t197 = t55 * (-t56 * (0.3e1 / 0.2e1 * t135 * t109 - t140 * t70 * t174 / 0.6e1 - 0.2e1 / 0.27e2 * t113 * t97 * t115 - t181 * t103 * t184 / 0.27e2 - 0.5e1 / 0.18e2 * t27 * t158 * t70 + t35 * t164 * t74 / 0.18e2) + t169);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t108 + 0.2e1 * t128 + rho[0] * (-t169 + t197);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t202 = t82 * t82;
  t203 = 0.1e1 / t202;
  t204 = t2 * t203;
  t208 = 0.1e1 / t28 / t133;
  t209 = t2 * t208;
  t214 = 0.1e1 / t18 / t133;
  t215 = t2 * t214;
  t217 = t12 * t150;
  t219 = t217 * t36 * t153;
  t228 = t11 * M_PI;
  t231 = 0.1e1 / t152 / t23;
  t235 = t17 * t208;
  t239 = t36 * t214;
  t244 = t1 * (-0.9e1 / 0.2e1 * t204 * t85 + 0.2e1 / 0.3e1 * t209 * t31 * t143 + t215 * t39 * t219 / 0.12e2 + 0.10e2 / 0.81e2 * t89 * t158 * t91 + 0.2e1 / 0.27e2 * t151 * t164 * t154 + 0.8e1 / 0.81e2 * t228 * t83 * t7 * t231 + 0.20e2 / 0.27e2 * t27 * t235 * t31 - 0.7e1 / 0.54e2 * t35 * t239 * t39);
  t252 = t217 * t36 * t183;
  t261 = t63 * M_PI;
  t264 = 0.1e1 / t182 / t67;
  t277 = t55 * (-t56 * (-0.9e1 / 0.2e1 * t204 * t109 + 0.2e1 / 0.3e1 * t209 * t70 * t174 + t215 * t74 * t252 / 0.12e2 + 0.10e2 / 0.81e2 * t113 * t158 * t115 + 0.2e1 / 0.27e2 * t181 * t164 * t184 + 0.8e1 / 0.81e2 * t261 * t83 * t59 * t264 + 0.20e2 / 0.27e2 * t27 * t235 * t70 - 0.7e1 / 0.54e2 * t35 * t239 * t74) + t244);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t169 + 0.3e1 * t197 + rho[0] * (-t244 + t277);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t284 = t2 / t202 / rho[0];
  t288 = 0.1e1 / t28 / t202;
  t289 = t2 * t288;
  t294 = 0.1e1 / t18 / t202;
  t295 = t2 * t294;
  t311 = t6 * t6;
  t314 = t152 * t152;
  t317 = t15 * t17;
  t321 = t17 * t288;
  t325 = t36 * t294;
  t330 = t1 * (0.18e2 * t284 * t85 - 0.82e2 / 0.27e2 * t289 * t31 * t143 - 0.5e1 / 0.9e1 * t295 * t39 * t219 - 0.8e1 / 0.27e2 * t203 * t231 - 0.80e2 / 0.243e3 * t89 * t235 * t91 - 0.52e2 / 0.243e3 * t151 * t239 * t154 - 0.32e2 / 0.81e2 * t228 * t134 * t7 * t231 - 0.8e1 / 0.243e3 * t228 * t139 * t311 / t314 * t13 * t317 - 0.220e3 / 0.81e2 * t27 * t321 * t31 + 0.35e2 / 0.81e2 * t35 * t325 * t39);
  t351 = t58 * t58;
  t354 = t182 * t182;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -0.4e1 * t244 + 0.4e1 * t277 + rho[0] * (-t330 + t55 * (-t56 * (0.18e2 * t284 * t109 - 0.82e2 / 0.27e2 * t289 * t70 * t174 - 0.5e1 / 0.9e1 * t295 * t74 * t252 - 0.8e1 / 0.27e2 * t203 * t264 - 0.80e2 / 0.243e3 * t113 * t235 * t115 - 0.52e2 / 0.243e3 * t181 * t239 * t184 - 0.32e2 / 0.81e2 * t261 * t134 * t59 * t264 - 0.8e1 / 0.243e3 * t261 * t139 * t351 / t354 * t13 * t317 - 0.220e3 / 0.81e2 * t27 * t321 * t70 + 0.35e2 / 0.81e2 * t35 * t325 * t74) + t330));

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t12, t13, t14, t15, t16, t17, t18;
  double t19, t20, t24, t25, t27, t28, t29, t31;
  double t32, t36, t37, t39, t40, t45, t46, t47;
  double t48, t49, t50, t51, t52, t54, t55, t56;
  double t57, t59, t61, t64, t65, t66, t67, t68;
  double t69, t70, t73, t77, t78, t80, t84, t90;
  double t91;

#ifndef XC_DONT_COMPILE_VXC
  double t92, t93, t94, t95, t99, t100, t101, t107;
  double t113, t118, t119, t120, t123, t124, t127, t129;
  double t130, t131, t135, t136, t137, t149, t150, t153;
  double t156, t157, t160, t162, t163;

#ifndef XC_DONT_COMPILE_FXC
  double t166, t168, t169, t170, t171, t175, t176, t179;
  double t186, t187, t188, t189, t190, t194, t200, t205;
  double t206, t207, t208, t211, t213, t217, t218, t219;
  double t220, t223, t227, t229, t230, t231, t232, t237;
  double t244, t245, t246, t247, t259, t260, t263, t266;
  double t270, t271, t274, t278, t280, t281, t282, t286;
  double t290, t294, t295, t298, t302, t304, t305, t306;

#ifndef XC_DONT_COMPILE_KXC
  double t309, t312, t313, t314, t315, t319, t320, t325;
  double t326, t328, t330, t339, t342, t346, t350, t355;
  double t357, t358, t361, t364, t366, t370, t372, t373;
  double t376, t379, t383, t385, t386, t387, t389, t390;
  double t398, t407, t410, t422, t423, t427, t428, t431;
  double t442, t443, t446, t457, t459, t460, t461, t462;
  double t463, t468, t473, t478, t482, t483, t488, t491;
  double t495, t497, t498, t499, t505, t511, t515, t516;
  double t521, t525, t527, t528, t530;

#ifndef XC_DONT_COMPILE_LXC
  double t533, t537, t539, t540, t544, t545, t550, t551;
  double t567, t570, t573, t577, t581, t586, t587, t589;
  double t590, t596, t601, t603, t607, t608, t610, t611;
  double t617, t626, t630, t632, t634, t656, t659, t674;
  double t680, t705, t707, t732, t734, t738, t740, t741;
  double t742, t763, t766, t782, t808, t812, t814, t842;
  double t846, t867, t871, t880, t885, t891, t895, t896;
  double t901, t910;
#endif

#endif

#endif

#endif

#endif


  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->hl_c[0];
  t2 = 0.1e1 / M_PI;
  t3 = rho[0] + rho[1];
  t4 = 0.1e1 / t3;
  t5 = t2 * t4;
  t6 = params->hl_r[0];
  t7 = t6 * t6;
  t8 = t7 * t6;
  t9 = 0.1e1 / t8;
  t12 = 0.1e1 + 0.3e1 / 0.4e1 * t5 * t9;
  t13 = M_CBRT3;
  t14 = t13 * t13;
  t15 = POW_1_3(t2);
  t16 = 0.1e1 / t15;
  t17 = t14 * t16;
  t18 = M_CBRT4;
  t19 = POW_1_3(t3);
  t20 = t18 * t19;
  t24 = 0.1e1 + t17 * t20 * t6 / 0.3e1;
  t25 = log(t24);
  t27 = t15 * t15;
  t28 = t14 * t27;
  t29 = t19 * t19;
  t31 = t18 / t29;
  t32 = 0.1e1 / t7;
  t36 = t13 * t15;
  t37 = t18 * t18;
  t39 = t37 / t19;
  t40 = 0.1e1 / t6;
  t45 = t1 * (t12 * t25 - t28 * t31 * t32 / 0.4e1 + t36 * t39 * t40 / 0.8e1 - 0.1e1 / 0.3e1);
  t46 = rho[0] - rho[1];
  t47 = t46 * t4;
  t48 = 0.1e1 + t47;
  t49 = t48 <= p->zeta_threshold;
  t50 = POW_1_3(p->zeta_threshold);
  t51 = t50 * p->zeta_threshold;
  t52 = POW_1_3(t48);
  t54 = my_piecewise3(t49, t51, t52 * t48);
  t55 = 0.1e1 - t47;
  t56 = t55 <= p->zeta_threshold;
  t57 = POW_1_3(t55);
  t59 = my_piecewise3(t56, t51, t57 * t55);
  t61 = M_CBRT2;
  t64 = 0.1e1 / (0.2e1 * t61 - 0.2e1);
  t65 = (t54 + t59 - 0.2e1) * t64;
  t66 = params->hl_c[1];
  t67 = params->hl_r[1];
  t68 = t67 * t67;
  t69 = t68 * t67;
  t70 = 0.1e1 / t69;
  t73 = 0.1e1 + 0.3e1 / 0.4e1 * t5 * t70;
  t77 = 0.1e1 + t17 * t20 * t67 / 0.3e1;
  t78 = log(t77);
  t80 = 0.1e1 / t68;
  t84 = 0.1e1 / t67;
  t90 = -t66 * (t73 * t78 - t28 * t31 * t80 / 0.4e1 + t36 * t39 * t84 / 0.8e1 - 0.1e1 / 0.3e1) + t45;
  t91 = t65 * t90;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t45 + t91;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t92 = t3 * t3;
  t93 = 0.1e1 / t92;
  t94 = t2 * t93;
  t95 = t9 * t25;
  t99 = t12 * t14 * t16;
  t100 = 0.1e1 / t24;
  t101 = t6 * t100;
  t107 = t18 / t29 / t3;
  t113 = t37 / t19 / t3;
  t118 = t1 * (-0.3e1 / 0.4e1 * t94 * t95 + t99 * t31 * t101 / 0.9e1 + t28 * t107 * t32 / 0.6e1 - t36 * t113 * t40 / 0.24e2);
  t119 = t46 * t93;
  t120 = t4 - t119;
  t123 = my_piecewise3(t49, 0, 0.4e1 / 0.3e1 * t52 * t120);
  t124 = -t120;
  t127 = my_piecewise3(t56, 0, 0.4e1 / 0.3e1 * t57 * t124);
  t129 = (t123 + t127) * t64;
  t130 = t129 * t90;
  t131 = t70 * t78;
  t135 = t73 * t14 * t16;
  t136 = 0.1e1 / t77;
  t137 = t67 * t136;
  t149 = -t66 * (-0.3e1 / 0.4e1 * t94 * t131 + t135 * t31 * t137 / 0.9e1 + t28 * t107 * t80 / 0.6e1 - t36 * t113 * t84 / 0.24e2) + t118;
  t150 = t65 * t149;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t45 + t91 + t3 * (-t118 + t130 + t150);

  t153 = -t4 - t119;
  t156 = my_piecewise3(t49, 0, 0.4e1 / 0.3e1 * t52 * t153);
  t157 = -t153;
  t160 = my_piecewise3(t56, 0, 0.4e1 / 0.3e1 * t57 * t157);
  t162 = (t156 + t160) * t64;
  t163 = t162 * t90;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t45 + t91 + t3 * (-t118 + t163 + t150);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t166 = 0.2e1 * t118;
  t168 = 0.2e1 * t150;
  t169 = t92 * t3;
  t170 = 0.1e1 / t169;
  t171 = t2 * t170;
  t175 = 0.1e1 / t29 / t92;
  t176 = t2 * t175;
  t179 = t17 * t18 * t100;
  t186 = 0.1e1 / t27;
  t187 = t12 * t13 * t186;
  t188 = t24 * t24;
  t189 = 0.1e1 / t188;
  t190 = t7 * t189;
  t194 = t18 * t175;
  t200 = t37 / t19 / t92;
  t205 = t1 * (0.3e1 / 0.2e1 * t171 * t95 - t176 * t32 * t179 / 0.6e1 - 0.2e1 / 0.27e2 * t99 * t107 * t101 - t187 * t113 * t190 / 0.27e2 - 0.5e1 / 0.18e2 * t28 * t194 * t32 + t36 * t200 * t40 / 0.18e2);
  t206 = t52 * t52;
  t207 = 0.1e1 / t206;
  t208 = t120 * t120;
  t211 = t46 * t170;
  t213 = -0.2e1 * t93 + 0.2e1 * t211;
  t217 = my_piecewise3(t49, 0, 0.4e1 / 0.9e1 * t207 * t208 + 0.4e1 / 0.3e1 * t52 * t213);
  t218 = t57 * t57;
  t219 = 0.1e1 / t218;
  t220 = t124 * t124;
  t223 = -t213;
  t227 = my_piecewise3(t56, 0, 0.4e1 / 0.9e1 * t219 * t220 + 0.4e1 / 0.3e1 * t57 * t223);
  t229 = (t217 + t227) * t64;
  t230 = t229 * t90;
  t231 = t129 * t149;
  t232 = 0.2e1 * t231;
  t237 = t17 * t18 * t136;
  t244 = t73 * t13 * t186;
  t245 = t77 * t77;
  t246 = 0.1e1 / t245;
  t247 = t68 * t246;
  t259 = -t66 * (0.3e1 / 0.2e1 * t171 * t131 - t176 * t80 * t237 / 0.6e1 - 0.2e1 / 0.27e2 * t135 * t107 * t137 - t244 * t113 * t247 / 0.27e2 - 0.5e1 / 0.18e2 * t28 * t194 * t80 + t36 * t200 * t84 / 0.18e2) + t205;
  t260 = t65 * t259;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t166 + 0.2e1 * t130 + t168 + t3 * (-t205 + t230 + t232 + t260);

  t263 = t207 * t153;
  t266 = t52 * t46;
  t270 = my_piecewise3(t49, 0, 0.4e1 / 0.9e1 * t263 * t120 + 0.8e1 / 0.3e1 * t266 * t170);
  t271 = t219 * t157;
  t274 = t57 * t46;
  t278 = my_piecewise3(t56, 0, 0.4e1 / 0.9e1 * t271 * t124 - 0.8e1 / 0.3e1 * t274 * t170);
  t280 = (t270 + t278) * t64;
  t281 = t280 * t90;
  t282 = t162 * t149;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -t166 + t130 + t168 + t163 + t3 * (-t205 + t281 + t282 + t231 + t260);

  t286 = t153 * t153;
  t290 = 0.2e1 * t93 + 0.2e1 * t211;
  t294 = my_piecewise3(t49, 0, 0.4e1 / 0.9e1 * t207 * t286 + 0.4e1 / 0.3e1 * t52 * t290);
  t295 = t157 * t157;
  t298 = -t290;
  t302 = my_piecewise3(t56, 0, 0.4e1 / 0.9e1 * t219 * t295 + 0.4e1 / 0.3e1 * t57 * t298);
  t304 = (t294 + t302) * t64;
  t305 = t304 * t90;
  t306 = 0.2e1 * t282;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t166 + 0.2e1 * t163 + t168 + t3 * (-t205 + t305 + t306 + t260);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t309 = 0.3e1 * t205;
  t312 = 0.3e1 * t260;
  t313 = t92 * t92;
  t314 = 0.1e1 / t313;
  t315 = t2 * t314;
  t319 = 0.1e1 / t29 / t169;
  t320 = t2 * t319;
  t325 = 0.1e1 / t19 / t169;
  t326 = t2 * t325;
  t328 = t13 * t186;
  t330 = t328 * t37 * t189;
  t339 = t12 * M_PI;
  t342 = 0.1e1 / t188 / t24;
  t346 = t18 * t319;
  t350 = t37 * t325;
  t355 = t1 * (-0.9e1 / 0.2e1 * t315 * t95 + 0.2e1 / 0.3e1 * t320 * t32 * t179 + t326 * t40 * t330 / 0.12e2 + 0.10e2 / 0.81e2 * t99 * t194 * t101 + 0.2e1 / 0.27e2 * t187 * t200 * t190 + 0.8e1 / 0.81e2 * t339 * t93 * t8 * t342 + 0.20e2 / 0.27e2 * t28 * t346 * t32 - 0.7e1 / 0.54e2 * t36 * t350 * t40);
  t357 = 0.1e1 / t206 / t48;
  t358 = t208 * t120;
  t361 = t207 * t120;
  t364 = t46 * t314;
  t366 = 0.6e1 * t170 - 0.6e1 * t364;
  t370 = my_piecewise3(t49, 0, -0.8e1 / 0.27e2 * t357 * t358 + 0.4e1 / 0.3e1 * t361 * t213 + 0.4e1 / 0.3e1 * t52 * t366);
  t372 = 0.1e1 / t218 / t55;
  t373 = t220 * t124;
  t376 = t219 * t124;
  t379 = -t366;
  t383 = my_piecewise3(t56, 0, -0.8e1 / 0.27e2 * t372 * t373 + 0.4e1 / 0.3e1 * t376 * t223 + 0.4e1 / 0.3e1 * t57 * t379);
  t385 = (t370 + t383) * t64;
  t386 = t385 * t90;
  t387 = t229 * t149;
  t389 = t129 * t259;
  t390 = 0.3e1 * t389;
  t398 = t328 * t37 * t246;
  t407 = t73 * M_PI;
  t410 = 0.1e1 / t245 / t77;
  t422 = -t66 * (-0.9e1 / 0.2e1 * t315 * t131 + 0.2e1 / 0.3e1 * t320 * t80 * t237 + t326 * t84 * t398 / 0.12e2 + 0.10e2 / 0.81e2 * t135 * t194 * t137 + 0.2e1 / 0.27e2 * t244 * t200 * t247 + 0.8e1 / 0.81e2 * t407 * t93 * t69 * t410 + 0.20e2 / 0.27e2 * t28 * t346 * t80 - 0.7e1 / 0.54e2 * t36 * t350 * t84) + t355;
  t423 = t65 * t422;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t309 + 0.3e1 * t230 + 0.6e1 * t231 + t312 + t3 * (-t355 + t386 + 0.3e1 * t387 + t390 + t423);

  t427 = 0.2e1 * t281;
  t428 = t357 * t153;
  t431 = t207 * t46;
  t442 = my_piecewise3(t49, 0, -0.8e1 / 0.27e2 * t428 * t208 + 0.16e2 / 0.9e1 * t431 * t170 * t120 + 0.4e1 / 0.9e1 * t263 * t213 + 0.8e1 / 0.3e1 * t52 * t170 - 0.8e1 * t266 * t314);
  t443 = t372 * t157;
  t446 = t219 * t46;
  t457 = my_piecewise3(t56, 0, -0.8e1 / 0.27e2 * t443 * t220 - 0.16e2 / 0.9e1 * t446 * t170 * t124 + 0.4e1 / 0.9e1 * t271 * t223 - 0.8e1 / 0.3e1 * t57 * t170 + 0.8e1 * t274 * t314);
  t459 = (t442 + t457) * t64;
  t460 = t459 * t90;
  t461 = t280 * t149;
  t462 = 0.2e1 * t461;
  t463 = t162 * t259;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t309 + t230 + 0.4e1 * t231 + t312 + t427 + t306 + t3 * (-t355 + t460 + t462 + t463 + t387 + 0.2e1 * t389 + t423);

  t468 = t357 * t286;
  t473 = t207 * t290;
  t478 = -0.2e1 * t170 - 0.6e1 * t364;
  t482 = my_piecewise3(t49, 0, -0.8e1 / 0.27e2 * t468 * t120 + 0.16e2 / 0.9e1 * t263 * t211 + 0.4e1 / 0.9e1 * t473 * t120 + 0.4e1 / 0.3e1 * t52 * t478);
  t483 = t372 * t295;
  t488 = t219 * t298;
  t491 = -t478;
  t495 = my_piecewise3(t56, 0, -0.8e1 / 0.27e2 * t483 * t124 - 0.16e2 / 0.9e1 * t271 * t211 + 0.4e1 / 0.9e1 * t488 * t124 + 0.4e1 / 0.3e1 * t57 * t491);
  t497 = (t482 + t495) * t64;
  t498 = t497 * t90;
  t499 = t304 * t149;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t309 + t427 + 0.4e1 * t282 + t232 + t312 + t305 + t3 * (-t355 + t498 + t499 + t462 + 0.2e1 * t463 + t389 + t423);

  t505 = t286 * t153;
  t511 = -0.6e1 * t170 - 0.6e1 * t364;
  t515 = my_piecewise3(t49, 0, -0.8e1 / 0.27e2 * t357 * t505 + 0.4e1 / 0.3e1 * t263 * t290 + 0.4e1 / 0.3e1 * t52 * t511);
  t516 = t295 * t157;
  t521 = -t511;
  t525 = my_piecewise3(t56, 0, -0.8e1 / 0.27e2 * t372 * t516 + 0.4e1 / 0.3e1 * t271 * t298 + 0.4e1 / 0.3e1 * t57 * t521);
  t527 = (t515 + t525) * t64;
  t528 = t527 * t90;
  t530 = 0.3e1 * t463;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t309 + 0.3e1 * t305 + 0.6e1 * t282 + t312 + t3 * (-t355 + t528 + 0.3e1 * t499 + t530 + t423);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t533 = 0.4e1 * t355;
  t537 = 0.4e1 * t423;
  t539 = 0.1e1 / t313 / t3;
  t540 = t2 * t539;
  t544 = 0.1e1 / t29 / t313;
  t545 = t2 * t544;
  t550 = 0.1e1 / t19 / t313;
  t551 = t2 * t550;
  t567 = t7 * t7;
  t570 = t188 * t188;
  t573 = t16 * t18;
  t577 = t18 * t544;
  t581 = t37 * t550;
  t586 = t1 * (0.18e2 * t540 * t95 - 0.82e2 / 0.27e2 * t545 * t32 * t179 - 0.5e1 / 0.9e1 * t551 * t40 * t330 - 0.8e1 / 0.27e2 * t314 * t342 - 0.80e2 / 0.243e3 * t99 * t346 * t101 - 0.52e2 / 0.243e3 * t187 * t350 * t190 - 0.32e2 / 0.81e2 * t339 * t170 * t8 * t342 - 0.8e1 / 0.243e3 * t339 * t175 * t567 / t570 * t14 * t573 - 0.220e3 / 0.81e2 * t28 * t577 * t32 + 0.35e2 / 0.81e2 * t36 * t581 * t40);
  t587 = t48 * t48;
  t589 = 0.1e1 / t206 / t587;
  t590 = t208 * t208;
  t596 = t213 * t213;
  t601 = t46 * t539;
  t603 = -0.24e2 * t314 + 0.24e2 * t601;
  t607 = my_piecewise3(t49, 0, 0.40e2 / 0.81e2 * t589 * t590 - 0.16e2 / 0.9e1 * t357 * t208 * t213 + 0.4e1 / 0.3e1 * t207 * t596 + 0.16e2 / 0.9e1 * t361 * t366 + 0.4e1 / 0.3e1 * t52 * t603);
  t608 = t55 * t55;
  t610 = 0.1e1 / t218 / t608;
  t611 = t220 * t220;
  t617 = t223 * t223;
  t626 = my_piecewise3(t56, 0, 0.40e2 / 0.81e2 * t610 * t611 - 0.16e2 / 0.9e1 * t372 * t220 * t223 + 0.4e1 / 0.3e1 * t219 * t617 + 0.16e2 / 0.9e1 * t376 * t379 - 0.4e1 / 0.3e1 * t57 * t603);
  t630 = t385 * t149;
  t632 = t229 * t259;
  t634 = t129 * t422;
  t656 = t68 * t68;
  t659 = t245 * t245;
  t674 = t65 * (-t66 * (0.18e2 * t540 * t131 - 0.82e2 / 0.27e2 * t545 * t80 * t237 - 0.5e1 / 0.9e1 * t551 * t84 * t398 - 0.8e1 / 0.27e2 * t314 * t410 - 0.80e2 / 0.243e3 * t135 * t346 * t137 - 0.52e2 / 0.243e3 * t244 * t350 * t247 - 0.32e2 / 0.81e2 * t407 * t170 * t69 * t410 - 0.8e1 / 0.243e3 * t407 * t175 * t656 / t659 * t14 * t573 - 0.220e3 / 0.81e2 * t28 * t577 * t80 + 0.35e2 / 0.81e2 * t36 * t581 * t84) + t586);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = -t533 + 0.4e1 * t386 + 0.12e2 * t387 + 0.12e2 * t389 + t537 + t3 * (-t586 + (t607 + t626) * t64 * t90 + 0.4e1 * t630 + 0.6e1 * t632 + 0.4e1 * t634 + t674);

  t680 = 0.6e1 * t461;
  t705 = 0.32e2 * t266 * t539;
  t707 = my_piecewise3(t49, 0, 0.40e2 / 0.81e2 * t589 * t153 * t358 - 0.16e2 / 0.9e1 * t357 * t46 * t170 * t208 - 0.8e1 / 0.9e1 * t428 * t120 * t213 + 0.8e1 / 0.3e1 * t207 * t170 * t120 - 0.8e1 * t431 * t314 * t120 + 0.8e1 / 0.3e1 * t431 * t170 * t213 + 0.4e1 / 0.9e1 * t263 * t366 - 0.16e2 * t52 * t314 + t705);
  t732 = 0.32e2 * t274 * t539;
  t734 = my_piecewise3(t56, 0, 0.40e2 / 0.81e2 * t610 * t157 * t373 + 0.16e2 / 0.9e1 * t372 * t46 * t170 * t220 - 0.8e1 / 0.9e1 * t443 * t124 * t223 - 0.8e1 / 0.3e1 * t219 * t170 * t124 + 0.8e1 * t446 * t314 * t124 - 0.8e1 / 0.3e1 * t446 * t170 * t223 + 0.4e1 / 0.9e1 * t271 * t379 + 0.16e2 * t57 * t314 - t732);
  t738 = t459 * t149;
  t740 = t280 * t259;
  t741 = 0.3e1 * t740;
  t742 = t162 * t422;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -t533 + t386 + 0.6e1 * t387 + 0.9e1 * t389 + t537 + 0.3e1 * t460 + t680 + t530 + t3 * (-t586 + (t707 + t734) * t64 * t90 + 0.3e1 * t738 + t741 + t742 + t630 + 0.3e1 * t632 + 0.3e1 * t634 + t674);

  t763 = t46 * t46;
  t766 = 0.1e1 / t313 / t92;
  t782 = my_piecewise3(t49, 0, 0.40e2 / 0.81e2 * t589 * t286 * t208 - 0.64e2 / 0.27e2 * t428 * t120 * t46 * t170 - 0.8e1 / 0.27e2 * t468 * t213 + 0.32e2 / 0.9e1 * t207 * t763 * t766 + 0.16e2 / 0.9e1 * t263 * t170 - 0.16e2 / 0.3e1 * t263 * t364 - 0.8e1 / 0.27e2 * t357 * t290 * t208 + 0.8e1 / 0.9e1 * t207 * t478 * t120 + 0.4e1 / 0.9e1 * t473 * t213 + t705);
  t808 = my_piecewise3(t56, 0, 0.40e2 / 0.81e2 * t610 * t295 * t220 + 0.64e2 / 0.27e2 * t443 * t124 * t46 * t170 - 0.8e1 / 0.27e2 * t483 * t223 + 0.32e2 / 0.9e1 * t219 * t763 * t766 - 0.16e2 / 0.9e1 * t271 * t170 + 0.16e2 / 0.3e1 * t271 * t364 - 0.8e1 / 0.27e2 * t372 * t298 * t220 + 0.8e1 / 0.9e1 * t219 * t491 * t124 + 0.4e1 / 0.9e1 * t488 * t223 - t732);
  t812 = t497 * t149;
  t814 = t304 * t259;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -t533 + 0.2e1 * t460 + 0.8e1 * t461 + 0.6e1 * t463 + 0.2e1 * t387 + 0.6e1 * t389 + t537 + 0.2e1 * t498 + 0.2e1 * t499 + t3 * (-t586 + (t782 + t808) * t64 * t90 + 0.2e1 * t812 + t814 + 0.2e1 * t738 + 0.4e1 * t740 + 0.2e1 * t742 + t632 + 0.2e1 * t634 + t674);

  t842 = 0.12e2 * t314 + 0.24e2 * t601;
  t846 = my_piecewise3(t49, 0, 0.40e2 / 0.81e2 * t589 * t505 * t120 - 0.16e2 / 0.9e1 * t468 * t211 - 0.8e1 / 0.9e1 * t428 * t290 * t120 + 0.8e1 / 0.3e1 * t431 * t170 * t290 + 0.4e1 / 0.3e1 * t263 * t478 + 0.4e1 / 0.9e1 * t207 * t511 * t120 + 0.4e1 / 0.3e1 * t52 * t842);
  t867 = my_piecewise3(t56, 0, 0.40e2 / 0.81e2 * t610 * t516 * t124 + 0.16e2 / 0.9e1 * t483 * t211 - 0.8e1 / 0.9e1 * t443 * t298 * t124 - 0.8e1 / 0.3e1 * t446 * t170 * t298 + 0.4e1 / 0.3e1 * t271 * t491 + 0.4e1 / 0.9e1 * t219 * t521 * t124 - 0.4e1 / 0.3e1 * t57 * t842);
  t871 = t527 * t149;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = -t533 + 0.3e1 * t498 + 0.6e1 * t499 + t680 + 0.9e1 * t463 + t390 + t537 + t528 + t3 * (-t586 + (t846 + t867) * t64 * t90 + t871 + 0.3e1 * t812 + 0.3e1 * t814 + t741 + 0.3e1 * t742 + t634 + t674);

  t880 = t286 * t286;
  t885 = t290 * t290;
  t891 = 0.24e2 * t314 + 0.24e2 * t601;
  t895 = my_piecewise3(t49, 0, 0.40e2 / 0.81e2 * t589 * t880 - 0.16e2 / 0.9e1 * t468 * t290 + 0.4e1 / 0.3e1 * t207 * t885 + 0.16e2 / 0.9e1 * t263 * t511 + 0.4e1 / 0.3e1 * t52 * t891);
  t896 = t295 * t295;
  t901 = t298 * t298;
  t910 = my_piecewise3(t56, 0, 0.40e2 / 0.81e2 * t610 * t896 - 0.16e2 / 0.9e1 * t483 * t298 + 0.4e1 / 0.3e1 * t219 * t901 + 0.16e2 / 0.9e1 * t271 * t521 - 0.4e1 / 0.3e1 * t57 * t891);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = -t533 + 0.4e1 * t528 + 0.12e2 * t499 + 0.12e2 * t463 + t537 + t3 * (-t586 + (t895 + t910) * t64 * t90 + 0.4e1 * t871 + 0.6e1 * t814 + 0.4e1 * t742 + t674);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

