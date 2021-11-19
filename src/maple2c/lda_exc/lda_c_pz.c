/*
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_pz.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t19, t20;
  double t21, t24, t27, t28, t32, t33, t34, t38;
  double t42, t43, t44, t48, t51, t54, t58, t59;
  double t63, t67, t70, t72, t74, t76, t79, t80;

#ifndef XC_DONT_COMPILE_VXC
  double t81, t83, t84, t86, t88, t89, t93, t95;
  double t99, t107, t108, t110, t112, t116, t127, t130;

#ifndef XC_DONT_COMPILE_FXC
  double t137, t138, t142, t144, t145, t146, t147, t148;
  double t149, t152, t156, t157, t162, t165, t169, t177;
  double t180, t181, t185, t192, t204, t207;

#ifndef XC_DONT_COMPILE_KXC
  double t212, t214, t227, t228, t229, t230, t231, t234;
  double t237, t241, t242, t247, t250, t254, t262, t263;
  double t265, t272, t281, t293, t296;

#ifndef XC_DONT_COMPILE_LXC
  double t304, t310, t319, t322, t326, t330, t335, t339;
  double t340, t351, t359, t363, t369, t399;
#endif

#endif

#endif

#endif

#endif


  lda_c_pz_params *params;

  assert(p->params != NULL);
  params = (lda_c_pz_params * )(p->params);

  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t8 = 0.1e1 / t7;
  t9 = t6 * t8;
  t10 = t1 * t3 * t9;
  t11 = t10 / 0.4e1;
  t12 = 0.1e1 <= t11;
  t13 = params->gamma[0];
  t14 = params->beta1[0];
  t15 = sqrt(t10);
  t19 = params->beta2[0] * t1;
  t20 = t3 * t6;
  t21 = t20 * t8;
  t24 = 0.1e1 + t14 * t15 / 0.2e1 + t19 * t21 / 0.4e1;
  t27 = params->a[0];
  t28 = log(t11);
  t32 = params->c[0] * t1;
  t33 = t32 * t3;
  t34 = t9 * t28;
  t38 = params->d[0] * t1;
  t42 = my_piecewise3(t12, t13 / t24, t27 * t28 + params->b[0] + t33 * t34 / 0.4e1 + t38 * t21 / 0.4e1);
  t43 = params->gamma[1];
  t44 = params->beta1[1];
  t48 = params->beta2[1] * t1;
  t51 = 0.1e1 + t44 * t15 / 0.2e1 + t48 * t21 / 0.4e1;
  t54 = params->a[1];
  t58 = params->c[1] * t1;
  t59 = t58 * t3;
  t63 = params->d[1] * t1;
  t67 = my_piecewise3(t12, t43 / t51, t54 * t28 + params->b[1] + t59 * t34 / 0.4e1 + t63 * t21 / 0.4e1);
  t70 = POW_1_3(p->zeta_threshold);
  t72 = my_piecewise3(0.1e1 <= p->zeta_threshold, t70 * p->zeta_threshold, 1);
  t74 = 0.2e1 * t72 - 0.2e1;
  t76 = M_CBRT2;
  t79 = 0.1e1 / (0.2e1 * t76 - 0.2e1);
  t80 = (t67 - t42) * t74 * t79;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t42 + t80;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t81 = t24 * t24;
  t83 = t13 / t81;
  t84 = 0.1e1 / t15;
  t86 = t14 * t84 * t1;
  t88 = 0.1e1 / t7 / rho[0];
  t89 = t20 * t88;
  t93 = -t19 * t89 / 0.12e2 - t86 * t89 / 0.12e2;
  t95 = 0.1e1 / rho[0];
  t99 = t6 * t88 * t28;
  t107 = my_piecewise3(t12, -t83 * t93, -t27 * t95 / 0.3e1 - t33 * t99 / 0.12e2 - t32 * t89 / 0.12e2 - t38 * t89 / 0.12e2);
  t108 = t51 * t51;
  t110 = t43 / t108;
  t112 = t44 * t84 * t1;
  t116 = -t112 * t89 / 0.12e2 - t48 * t89 / 0.12e2;
  t127 = my_piecewise3(t12, -t110 * t116, -t54 * t95 / 0.3e1 - t59 * t99 / 0.12e2 - t58 * t89 / 0.12e2 - t63 * t89 / 0.12e2);
  t130 = (t127 - t107) * t74 * t79;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t42 + t80 + rho[0] * (t107 + t130);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t137 = t13 / t81 / t24;
  t138 = t93 * t93;
  t142 = 0.1e1 / t15 / t10;
  t144 = t1 * t1;
  t145 = t14 * t142 * t144;
  t146 = t3 * t3;
  t147 = t146 * t5;
  t148 = rho[0] * rho[0];
  t149 = t7 * t7;
  t152 = t147 / t149 / t148;
  t156 = 0.1e1 / t7 / t148;
  t157 = t20 * t156;
  t162 = -t145 * t152 / 0.18e2 + t86 * t157 / 0.9e1 + t19 * t157 / 0.9e1;
  t165 = 0.1e1 / t148;
  t169 = t6 * t156 * t28;
  t177 = my_piecewise3(t12, 0.2e1 * t137 * t138 - t83 * t162, t27 * t165 / 0.3e1 + t33 * t169 / 0.9e1 + 0.5e1 / 0.36e2 * t32 * t157 + t38 * t157 / 0.9e1);
  t180 = t43 / t108 / t51;
  t181 = t116 * t116;
  t185 = t44 * t142 * t144;
  t192 = -t185 * t152 / 0.18e2 + t112 * t157 / 0.9e1 + t48 * t157 / 0.9e1;
  t204 = my_piecewise3(t12, -t110 * t192 + 0.2e1 * t180 * t181, t54 * t165 / 0.3e1 + t59 * t169 / 0.9e1 + 0.5e1 / 0.36e2 * t58 * t157 + t63 * t157 / 0.9e1);
  t207 = (t204 - t177) * t74 * t79;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t107 + 0.2e1 * t130 + rho[0] * (t177 + t207);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t212 = t81 * t81;
  t214 = t13 / t212;
  t227 = 0.1e1 / t15 / t144 / t146 / t5 * t149 / 0.4e1;
  t228 = t14 * t227;
  t229 = t148 * t148;
  t230 = 0.1e1 / t229;
  t231 = t2 * t230;
  t234 = t148 * rho[0];
  t237 = t147 / t149 / t234;
  t241 = 0.1e1 / t7 / t234;
  t242 = t20 * t241;
  t247 = -t228 * t231 / 0.3e1 + 0.2e1 / 0.9e1 * t145 * t237 - 0.7e1 / 0.27e2 * t86 * t242 - 0.7e1 / 0.27e2 * t19 * t242;
  t250 = 0.1e1 / t234;
  t254 = t6 * t241 * t28;
  t262 = my_piecewise3(t12, 0.6e1 * t137 * t93 * t162 - 0.6e1 * t214 * t138 * t93 - t83 * t247, -0.2e1 / 0.3e1 * t27 * t250 - 0.7e1 / 0.27e2 * t33 * t254 - 0.13e2 / 0.36e2 * t32 * t242 - 0.7e1 / 0.27e2 * t38 * t242);
  t263 = t108 * t108;
  t265 = t43 / t263;
  t272 = t44 * t227;
  t281 = -t272 * t231 / 0.3e1 + 0.2e1 / 0.9e1 * t185 * t237 - 0.7e1 / 0.27e2 * t112 * t242 - 0.7e1 / 0.27e2 * t48 * t242;
  t293 = my_piecewise3(t12, 0.6e1 * t180 * t116 * t192 - 0.6e1 * t265 * t181 * t116 - t110 * t281, -0.2e1 / 0.3e1 * t54 * t250 - 0.7e1 / 0.27e2 * t59 * t254 - 0.13e2 / 0.36e2 * t58 * t242 - 0.7e1 / 0.27e2 * t63 * t242);
  t296 = (t293 - t262) * t74 * t79;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t177 + 0.3e1 * t207 + rho[0] * (t262 + t296);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t304 = t138 * t138;
  t310 = t162 * t162;
  t319 = 0.1e1 / t15 / t2 / t95 / 0.48e2;
  t322 = t229 * rho[0];
  t326 = 0.1e1 / t7 / t322 * t1 * t20;
  t330 = t2 / t322;
  t335 = t147 / t149 / t229;
  t339 = 0.1e1 / t7 / t229;
  t340 = t20 * t339;
  t351 = t6 * t339 * t28;
  t359 = my_piecewise3(t12, 0.24e2 * t13 / t212 / t24 * t304 - 0.36e2 * t214 * t138 * t162 + 0.6e1 * t137 * t310 + 0.8e1 * t137 * t93 * t247 - t83 * (-0.5e1 / 0.18e2 * t14 * t319 * t2 * t326 + 0.8e1 / 0.3e1 * t228 * t330 - 0.80e2 / 0.81e2 * t145 * t335 + 0.70e2 / 0.81e2 * t86 * t340 + 0.70e2 / 0.81e2 * t19 * t340), 0.2e1 * t27 * t230 + 0.70e2 / 0.81e2 * t33 * t351 + 0.209e3 / 0.162e3 * t32 * t340 + 0.70e2 / 0.81e2 * t38 * t340);
  t363 = t181 * t181;
  t369 = t192 * t192;
  t399 = my_piecewise3(t12, 0.24e2 * t43 / t263 / t51 * t363 - 0.36e2 * t265 * t181 * t192 + 0.6e1 * t180 * t369 + 0.8e1 * t180 * t116 * t281 - t110 * (-0.5e1 / 0.18e2 * t44 * t319 * t2 * t326 + 0.8e1 / 0.3e1 * t272 * t330 - 0.80e2 / 0.81e2 * t185 * t335 + 0.70e2 / 0.81e2 * t112 * t340 + 0.70e2 / 0.81e2 * t48 * t340), 0.2e1 * t54 * t230 + 0.70e2 / 0.81e2 * t59 * t351 + 0.209e3 / 0.162e3 * t58 * t340 + 0.70e2 / 0.81e2 * t63 * t340);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * t262 + 0.4e1 * t296 + rho[0] * (t359 + (t399 - t359) * t74 * t79);

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
  double t1, t2, t3, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t20;
  double t21, t22, t25, t28, t29, t33, t34, t35;
  double t39, t43, t44, t45, t49, t52, t55, t59;
  double t60, t64, t68, t69, t70, t71, t72, t73;
  double t74, t75, t76, t77, t79, t80, t81, t82;
  double t84, t85, t87, t90, t91;

#ifndef XC_DONT_COMPILE_VXC
  double t92, t94, t95, t97, t99, t100, t104, t109;
  double t117, t118, t120, t122, t126, t137, t138, t140;
  double t141, t142, t143, t144, t147, t148, t151, t152;
  double t154, t157, t160, t161, t164, t165, t167;

#ifndef XC_DONT_COMPILE_FXC
  double t170, t171, t175, t176, t180, t182, t183, t184;
  double t185, t186, t189, t193, t194, t199, t205, t213;
  double t216, t217, t221, t228, t240, t241, t243, t245;
  double t246, t247, t248, t249, t252, t253, t254, t256;
  double t260, t261, t262, t263, t266, t270, t271, t273;
  double t277, t278, t281, t285, t286, t289, t293, t294;
  double t296, t300, t301, t305, t309, t310, t313, t317;
  double t318, t320;

#ifndef XC_DONT_COMPILE_KXC
  double t323, t324, t327, t329, t342, t343, t344, t345;
  double t346, t351, t355, t356, t361, t367, t375, t376;
  double t378, t385, t394, t406, t407, t409, t411, t412;
  double t414, t417, t418, t421, t424, t426, t430, t432;
  double t433, t436, t439, t443, t444, t446, t450, t453;
  double t455, t456, t457, t460, t471, t472, t475, t486;
  double t487, t489, t495, t496, t501, t506, t510, t511;
  double t516, t519, t523, t524, t526, t531, t533, t539;
  double t543, t544, t549, t553, t554, t556;

#ifndef XC_DONT_COMPILE_LXC
  double t559, t560, t567, t573, t582, t585, t589, t592;
  double t593, t598, t602, t603, t614, t622, t626, t632;
  double t662, t665, t667, t670, t673, t675, t677, t678;
  double t684, t689, t691, t695, t696, t698, t699, t705;
  double t714, t722, t727, t729, t730, t732, t758, t760;
  double t785, t787, t805, t807, t818, t821, t837, t863;
  double t876, t895, t899, t920, t932, t937, t943, t947;
  double t948, t953, t962;
#endif

#endif

#endif

#endif

#endif


  lda_c_pz_params *params;

  assert(p->params != NULL);
  params = (lda_c_pz_params * )(p->params);

  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = rho[0] + rho[1];
  t8 = POW_1_3(t7);
  t9 = 0.1e1 / t8;
  t10 = t6 * t9;
  t11 = t1 * t3 * t10;
  t12 = t11 / 0.4e1;
  t13 = 0.1e1 <= t12;
  t14 = params->gamma[0];
  t15 = params->beta1[0];
  t16 = sqrt(t11);
  t20 = params->beta2[0] * t1;
  t21 = t3 * t6;
  t22 = t21 * t9;
  t25 = 0.1e1 + t15 * t16 / 0.2e1 + t20 * t22 / 0.4e1;
  t28 = params->a[0];
  t29 = log(t12);
  t33 = params->c[0] * t1;
  t34 = t33 * t3;
  t35 = t10 * t29;
  t39 = params->d[0] * t1;
  t43 = my_piecewise3(t13, t14 / t25, t28 * t29 + params->b[0] + t34 * t35 / 0.4e1 + t39 * t22 / 0.4e1);
  t44 = params->gamma[1];
  t45 = params->beta1[1];
  t49 = params->beta2[1] * t1;
  t52 = 0.1e1 + t45 * t16 / 0.2e1 + t49 * t22 / 0.4e1;
  t55 = params->a[1];
  t59 = params->c[1] * t1;
  t60 = t59 * t3;
  t64 = params->d[1] * t1;
  t68 = my_piecewise3(t13, t44 / t52, t55 * t29 + params->b[1] + t60 * t35 / 0.4e1 + t64 * t22 / 0.4e1);
  t69 = t68 - t43;
  t70 = rho[0] - rho[1];
  t71 = 0.1e1 / t7;
  t72 = t70 * t71;
  t73 = 0.1e1 + t72;
  t74 = t73 <= p->zeta_threshold;
  t75 = POW_1_3(p->zeta_threshold);
  t76 = t75 * p->zeta_threshold;
  t77 = POW_1_3(t73);
  t79 = my_piecewise3(t74, t76, t77 * t73);
  t80 = 0.1e1 - t72;
  t81 = t80 <= p->zeta_threshold;
  t82 = POW_1_3(t80);
  t84 = my_piecewise3(t81, t76, t82 * t80);
  t85 = t79 + t84 - 0.2e1;
  t87 = M_CBRT2;
  t90 = 0.1e1 / (0.2e1 * t87 - 0.2e1);
  t91 = t69 * t85 * t90;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t43 + t91;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t92 = t25 * t25;
  t94 = t14 / t92;
  t95 = 0.1e1 / t16;
  t97 = t15 * t95 * t1;
  t99 = 0.1e1 / t8 / t7;
  t100 = t21 * t99;
  t104 = -t20 * t100 / 0.12e2 - t97 * t100 / 0.12e2;
  t109 = t6 * t99 * t29;
  t117 = my_piecewise3(t13, -t94 * t104, -t28 * t71 / 0.3e1 - t34 * t109 / 0.12e2 - t33 * t100 / 0.12e2 - t39 * t100 / 0.12e2);
  t118 = t52 * t52;
  t120 = t44 / t118;
  t122 = t45 * t95 * t1;
  t126 = -t122 * t100 / 0.12e2 - t49 * t100 / 0.12e2;
  t137 = my_piecewise3(t13, -t120 * t126, -t55 * t71 / 0.3e1 - t60 * t109 / 0.12e2 - t59 * t100 / 0.12e2 - t64 * t100 / 0.12e2);
  t138 = t137 - t117;
  t140 = t138 * t85 * t90;
  t141 = t7 * t7;
  t142 = 0.1e1 / t141;
  t143 = t70 * t142;
  t144 = t71 - t143;
  t147 = my_piecewise3(t74, 0, 0.4e1 / 0.3e1 * t77 * t144);
  t148 = -t144;
  t151 = my_piecewise3(t81, 0, 0.4e1 / 0.3e1 * t82 * t148);
  t152 = t147 + t151;
  t154 = t69 * t152 * t90;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t43 + t91 + t7 * (t117 + t140 + t154);

  t157 = -t71 - t143;
  t160 = my_piecewise3(t74, 0, 0.4e1 / 0.3e1 * t77 * t157);
  t161 = -t157;
  t164 = my_piecewise3(t81, 0, 0.4e1 / 0.3e1 * t82 * t161);
  t165 = t160 + t164;
  t167 = t69 * t165 * t90;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t43 + t91 + t7 * (t117 + t140 + t167);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t170 = 0.2e1 * t117;
  t171 = 0.2e1 * t140;
  t175 = t14 / t92 / t25;
  t176 = t104 * t104;
  t180 = 0.1e1 / t16 / t11;
  t182 = t1 * t1;
  t183 = t15 * t180 * t182;
  t184 = t3 * t3;
  t185 = t184 * t5;
  t186 = t8 * t8;
  t189 = t185 / t186 / t141;
  t193 = 0.1e1 / t8 / t141;
  t194 = t21 * t193;
  t199 = -t183 * t189 / 0.18e2 + t97 * t194 / 0.9e1 + t20 * t194 / 0.9e1;
  t205 = t6 * t193 * t29;
  t213 = my_piecewise3(t13, 0.2e1 * t175 * t176 - t94 * t199, t28 * t142 / 0.3e1 + t34 * t205 / 0.9e1 + 0.5e1 / 0.36e2 * t33 * t194 + t39 * t194 / 0.9e1);
  t216 = t44 / t118 / t52;
  t217 = t126 * t126;
  t221 = t45 * t180 * t182;
  t228 = -t221 * t189 / 0.18e2 + t122 * t194 / 0.9e1 + t49 * t194 / 0.9e1;
  t240 = my_piecewise3(t13, -t120 * t228 + 0.2e1 * t216 * t217, t55 * t142 / 0.3e1 + t60 * t205 / 0.9e1 + 0.5e1 / 0.36e2 * t59 * t194 + t64 * t194 / 0.9e1);
  t241 = t240 - t213;
  t243 = t241 * t85 * t90;
  t245 = t138 * t152 * t90;
  t246 = 0.2e1 * t245;
  t247 = t77 * t77;
  t248 = 0.1e1 / t247;
  t249 = t144 * t144;
  t252 = t141 * t7;
  t253 = 0.1e1 / t252;
  t254 = t70 * t253;
  t256 = -0.2e1 * t142 + 0.2e1 * t254;
  t260 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t248 * t249 + 0.4e1 / 0.3e1 * t77 * t256);
  t261 = t82 * t82;
  t262 = 0.1e1 / t261;
  t263 = t148 * t148;
  t266 = -t256;
  t270 = my_piecewise3(t81, 0, 0.4e1 / 0.9e1 * t262 * t263 + 0.4e1 / 0.3e1 * t82 * t266);
  t271 = t260 + t270;
  t273 = t69 * t271 * t90;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t170 + t171 + 0.2e1 * t154 + t7 * (t213 + t243 + t246 + t273);

  t277 = t138 * t165 * t90;
  t278 = t248 * t157;
  t281 = t77 * t70;
  t285 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t278 * t144 + 0.8e1 / 0.3e1 * t281 * t253);
  t286 = t262 * t161;
  t289 = t82 * t70;
  t293 = my_piecewise3(t81, 0, 0.4e1 / 0.9e1 * t286 * t148 - 0.8e1 / 0.3e1 * t289 * t253);
  t294 = t285 + t293;
  t296 = t69 * t294 * t90;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t170 + t171 + t154 + t167 + t7 * (t213 + t243 + t245 + t277 + t296);

  t300 = 0.2e1 * t277;
  t301 = t157 * t157;
  t305 = 0.2e1 * t142 + 0.2e1 * t254;
  t309 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t248 * t301 + 0.4e1 / 0.3e1 * t77 * t305);
  t310 = t161 * t161;
  t313 = -t305;
  t317 = my_piecewise3(t81, 0, 0.4e1 / 0.9e1 * t262 * t310 + 0.4e1 / 0.3e1 * t82 * t313);
  t318 = t309 + t317;
  t320 = t69 * t318 * t90;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t170 + t171 + 0.2e1 * t167 + t7 * (t213 + t243 + t300 + t320);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t323 = 0.3e1 * t213;
  t324 = 0.3e1 * t243;
  t327 = t92 * t92;
  t329 = t14 / t327;
  t342 = 0.1e1 / t16 / t182 / t184 / t5 * t186 / 0.4e1;
  t343 = t15 * t342;
  t344 = t141 * t141;
  t345 = 0.1e1 / t344;
  t346 = t2 * t345;
  t351 = t185 / t186 / t252;
  t355 = 0.1e1 / t8 / t252;
  t356 = t21 * t355;
  t361 = -t343 * t346 / 0.3e1 + 0.2e1 / 0.9e1 * t183 * t351 - 0.7e1 / 0.27e2 * t97 * t356 - 0.7e1 / 0.27e2 * t20 * t356;
  t367 = t6 * t355 * t29;
  t375 = my_piecewise3(t13, 0.6e1 * t175 * t104 * t199 - 0.6e1 * t329 * t176 * t104 - t94 * t361, -0.2e1 / 0.3e1 * t28 * t253 - 0.7e1 / 0.27e2 * t34 * t367 - 0.13e2 / 0.36e2 * t33 * t356 - 0.7e1 / 0.27e2 * t39 * t356);
  t376 = t118 * t118;
  t378 = t44 / t376;
  t385 = t45 * t342;
  t394 = -t385 * t346 / 0.3e1 + 0.2e1 / 0.9e1 * t221 * t351 - 0.7e1 / 0.27e2 * t122 * t356 - 0.7e1 / 0.27e2 * t49 * t356;
  t406 = my_piecewise3(t13, 0.6e1 * t216 * t126 * t228 - 0.6e1 * t378 * t217 * t126 - t120 * t394, -0.2e1 / 0.3e1 * t55 * t253 - 0.7e1 / 0.27e2 * t60 * t367 - 0.13e2 / 0.36e2 * t59 * t356 - 0.7e1 / 0.27e2 * t64 * t356);
  t407 = t406 - t375;
  t409 = t407 * t85 * t90;
  t411 = t241 * t152 * t90;
  t412 = 0.3e1 * t411;
  t414 = t138 * t271 * t90;
  t417 = 0.1e1 / t247 / t73;
  t418 = t249 * t144;
  t421 = t248 * t144;
  t424 = t70 * t345;
  t426 = 0.6e1 * t253 - 0.6e1 * t424;
  t430 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t417 * t418 + 0.4e1 / 0.3e1 * t421 * t256 + 0.4e1 / 0.3e1 * t77 * t426);
  t432 = 0.1e1 / t261 / t80;
  t433 = t263 * t148;
  t436 = t262 * t148;
  t439 = -t426;
  t443 = my_piecewise3(t81, 0, -0.8e1 / 0.27e2 * t432 * t433 + 0.4e1 / 0.3e1 * t436 * t266 + 0.4e1 / 0.3e1 * t82 * t439);
  t444 = t430 + t443;
  t446 = t69 * t444 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t323 + t324 + 0.6e1 * t245 + 0.3e1 * t273 + t7 * (t375 + t409 + t412 + 0.3e1 * t414 + t446);

  t450 = 0.2e1 * t296;
  t453 = t241 * t165 * t90;
  t455 = t138 * t294 * t90;
  t456 = 0.2e1 * t455;
  t457 = t417 * t157;
  t460 = t248 * t70;
  t471 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t457 * t249 + 0.16e2 / 0.9e1 * t460 * t253 * t144 + 0.4e1 / 0.9e1 * t278 * t256 + 0.8e1 / 0.3e1 * t77 * t253 - 0.8e1 * t281 * t345);
  t472 = t432 * t161;
  t475 = t262 * t70;
  t486 = my_piecewise3(t81, 0, -0.8e1 / 0.27e2 * t472 * t263 - 0.16e2 / 0.9e1 * t475 * t253 * t148 + 0.4e1 / 0.9e1 * t286 * t266 - 0.8e1 / 0.3e1 * t82 * t253 + 0.8e1 * t289 * t345);
  t487 = t471 + t486;
  t489 = t69 * t487 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t323 + t324 + 0.4e1 * t245 + t273 + t300 + t450 + t7 * (t375 + t409 + 0.2e1 * t411 + t414 + t453 + t456 + t489);

  t495 = t138 * t318 * t90;
  t496 = t417 * t301;
  t501 = t248 * t305;
  t506 = -0.2e1 * t253 - 0.6e1 * t424;
  t510 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t496 * t144 + 0.16e2 / 0.9e1 * t278 * t254 + 0.4e1 / 0.9e1 * t501 * t144 + 0.4e1 / 0.3e1 * t77 * t506);
  t511 = t432 * t310;
  t516 = t262 * t313;
  t519 = -t506;
  t523 = my_piecewise3(t81, 0, -0.8e1 / 0.27e2 * t511 * t148 - 0.16e2 / 0.9e1 * t286 * t254 + 0.4e1 / 0.9e1 * t516 * t148 + 0.4e1 / 0.3e1 * t82 * t519);
  t524 = t510 + t523;
  t526 = t69 * t524 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t323 + t324 + t246 + 0.4e1 * t277 + t450 + t320 + t7 * (t375 + t409 + t411 + 0.2e1 * t453 + t456 + t495 + t526);

  t531 = 0.3e1 * t453;
  t533 = t301 * t157;
  t539 = -0.6e1 * t253 - 0.6e1 * t424;
  t543 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t417 * t533 + 0.4e1 / 0.3e1 * t278 * t305 + 0.4e1 / 0.3e1 * t77 * t539);
  t544 = t310 * t161;
  t549 = -t539;
  t553 = my_piecewise3(t81, 0, -0.8e1 / 0.27e2 * t432 * t544 + 0.4e1 / 0.3e1 * t286 * t313 + 0.4e1 / 0.3e1 * t82 * t549);
  t554 = t543 + t553;
  t556 = t69 * t554 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t323 + t324 + 0.6e1 * t277 + 0.3e1 * t320 + t7 * (t375 + t409 + t531 + 0.3e1 * t495 + t556);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t559 = 0.4e1 * t375;
  t560 = 0.4e1 * t409;
  t567 = t176 * t176;
  t573 = t199 * t199;
  t582 = 0.1e1 / t16 / t2 / t71 / 0.48e2;
  t585 = t344 * t7;
  t589 = 0.1e1 / t8 / t585 * t1 * t21;
  t592 = 0.1e1 / t585;
  t593 = t2 * t592;
  t598 = t185 / t186 / t344;
  t602 = 0.1e1 / t8 / t344;
  t603 = t21 * t602;
  t614 = t6 * t602 * t29;
  t622 = my_piecewise3(t13, 0.24e2 * t14 / t327 / t25 * t567 - 0.36e2 * t329 * t176 * t199 + 0.6e1 * t175 * t573 + 0.8e1 * t175 * t104 * t361 - t94 * (-0.5e1 / 0.18e2 * t15 * t582 * t2 * t589 + 0.8e1 / 0.3e1 * t343 * t593 - 0.80e2 / 0.81e2 * t183 * t598 + 0.70e2 / 0.81e2 * t97 * t603 + 0.70e2 / 0.81e2 * t20 * t603), 0.2e1 * t28 * t345 + 0.70e2 / 0.81e2 * t34 * t614 + 0.209e3 / 0.162e3 * t33 * t603 + 0.70e2 / 0.81e2 * t39 * t603);
  t626 = t217 * t217;
  t632 = t228 * t228;
  t662 = my_piecewise3(t13, 0.24e2 * t44 / t376 / t52 * t626 - 0.36e2 * t378 * t217 * t228 + 0.6e1 * t216 * t632 + 0.8e1 * t216 * t126 * t394 - t120 * (-0.5e1 / 0.18e2 * t45 * t582 * t2 * t589 + 0.8e1 / 0.3e1 * t385 * t593 - 0.80e2 / 0.81e2 * t221 * t598 + 0.70e2 / 0.81e2 * t122 * t603 + 0.70e2 / 0.81e2 * t49 * t603), 0.2e1 * t55 * t345 + 0.70e2 / 0.81e2 * t60 * t614 + 0.209e3 / 0.162e3 * t59 * t603 + 0.70e2 / 0.81e2 * t64 * t603);
  t665 = (t662 - t622) * t85 * t90;
  t667 = t407 * t152 * t90;
  t670 = t241 * t271 * t90;
  t673 = t138 * t444 * t90;
  t675 = t73 * t73;
  t677 = 0.1e1 / t247 / t675;
  t678 = t249 * t249;
  t684 = t256 * t256;
  t689 = t70 * t592;
  t691 = -0.24e2 * t345 + 0.24e2 * t689;
  t695 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t677 * t678 - 0.16e2 / 0.9e1 * t417 * t249 * t256 + 0.4e1 / 0.3e1 * t248 * t684 + 0.16e2 / 0.9e1 * t421 * t426 + 0.4e1 / 0.3e1 * t77 * t691);
  t696 = t80 * t80;
  t698 = 0.1e1 / t261 / t696;
  t699 = t263 * t263;
  t705 = t266 * t266;
  t714 = my_piecewise3(t81, 0, 0.40e2 / 0.81e2 * t698 * t699 - 0.16e2 / 0.9e1 * t432 * t263 * t266 + 0.4e1 / 0.3e1 * t262 * t705 + 0.16e2 / 0.9e1 * t436 * t439 - 0.4e1 / 0.3e1 * t82 * t691);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t559 + t560 + 0.12e2 * t411 + 0.12e2 * t414 + 0.4e1 * t446 + t7 * (t622 + t665 + 0.4e1 * t667 + 0.6e1 * t670 + 0.4e1 * t673 + t69 * (t695 + t714) * t90);

  t722 = 0.6e1 * t455;
  t727 = t407 * t165 * t90;
  t729 = t241 * t294 * t90;
  t730 = 0.3e1 * t729;
  t732 = t138 * t487 * t90;
  t758 = 0.32e2 * t281 * t592;
  t760 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t677 * t157 * t418 - 0.16e2 / 0.9e1 * t417 * t70 * t253 * t249 - 0.8e1 / 0.9e1 * t457 * t144 * t256 + 0.8e1 / 0.3e1 * t248 * t253 * t144 - 0.8e1 * t460 * t345 * t144 + 0.8e1 / 0.3e1 * t460 * t253 * t256 + 0.4e1 / 0.9e1 * t278 * t426 - 0.16e2 * t77 * t345 + t758);
  t785 = 0.32e2 * t289 * t592;
  t787 = my_piecewise3(t81, 0, 0.40e2 / 0.81e2 * t698 * t161 * t433 + 0.16e2 / 0.9e1 * t432 * t70 * t253 * t263 - 0.8e1 / 0.9e1 * t472 * t148 * t266 - 0.8e1 / 0.3e1 * t262 * t253 * t148 + 0.8e1 * t475 * t345 * t148 - 0.8e1 / 0.3e1 * t475 * t253 * t266 + 0.4e1 / 0.9e1 * t286 * t439 + 0.16e2 * t82 * t345 - t785);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t559 + t560 + 0.9e1 * t411 + 0.6e1 * t414 + t446 + t531 + t722 + 0.3e1 * t489 + t7 * (t622 + t665 + 0.3e1 * t667 + 0.3e1 * t670 + t673 + t727 + t730 + 0.3e1 * t732 + t69 * (t760 + t787) * t90);

  t805 = t241 * t318 * t90;
  t807 = t138 * t524 * t90;
  t818 = t70 * t70;
  t821 = 0.1e1 / t344 / t141;
  t837 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t677 * t301 * t249 - 0.64e2 / 0.27e2 * t457 * t144 * t70 * t253 - 0.8e1 / 0.27e2 * t496 * t256 + 0.32e2 / 0.9e1 * t248 * t818 * t821 + 0.16e2 / 0.9e1 * t278 * t253 - 0.16e2 / 0.3e1 * t278 * t424 - 0.8e1 / 0.27e2 * t417 * t305 * t249 + 0.8e1 / 0.9e1 * t248 * t506 * t144 + 0.4e1 / 0.9e1 * t501 * t256 + t758);
  t863 = my_piecewise3(t81, 0, 0.40e2 / 0.81e2 * t698 * t310 * t263 + 0.64e2 / 0.27e2 * t472 * t148 * t70 * t253 - 0.8e1 / 0.27e2 * t511 * t266 + 0.32e2 / 0.9e1 * t262 * t818 * t821 - 0.16e2 / 0.9e1 * t286 * t253 + 0.16e2 / 0.3e1 * t286 * t424 - 0.8e1 / 0.27e2 * t432 * t313 * t263 + 0.8e1 / 0.9e1 * t262 * t519 * t148 + 0.4e1 / 0.9e1 * t516 * t266 - t785);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t559 + t560 + 0.6e1 * t411 + 0.2e1 * t414 + 0.6e1 * t453 + 0.8e1 * t455 + 0.2e1 * t489 + 0.2e1 * t495 + 0.2e1 * t526 + t7 * (t622 + t665 + 0.2e1 * t667 + t670 + 0.2e1 * t727 + 0.4e1 * t729 + 0.2e1 * t732 + t805 + 0.2e1 * t807 + t69 * (t837 + t863) * t90);

  t876 = t138 * t554 * t90;
  t895 = 0.12e2 * t345 + 0.24e2 * t689;
  t899 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t677 * t533 * t144 - 0.16e2 / 0.9e1 * t496 * t254 - 0.8e1 / 0.9e1 * t457 * t305 * t144 + 0.8e1 / 0.3e1 * t460 * t253 * t305 + 0.4e1 / 0.3e1 * t278 * t506 + 0.4e1 / 0.9e1 * t248 * t539 * t144 + 0.4e1 / 0.3e1 * t77 * t895);
  t920 = my_piecewise3(t81, 0, 0.40e2 / 0.81e2 * t698 * t544 * t148 + 0.16e2 / 0.9e1 * t511 * t254 - 0.8e1 / 0.9e1 * t472 * t313 * t148 - 0.8e1 / 0.3e1 * t475 * t253 * t313 + 0.4e1 / 0.3e1 * t286 * t519 + 0.4e1 / 0.9e1 * t262 * t549 * t148 - 0.4e1 / 0.3e1 * t82 * t895);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t559 + t560 + t412 + 0.9e1 * t453 + t722 + 0.6e1 * t495 + 0.3e1 * t526 + t556 + t7 * (t622 + t665 + t667 + 0.3e1 * t727 + t730 + 0.3e1 * t805 + 0.3e1 * t807 + t876 + t69 * (t899 + t920) * t90);

  t932 = t301 * t301;
  t937 = t305 * t305;
  t943 = 0.24e2 * t345 + 0.24e2 * t689;
  t947 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t677 * t932 - 0.16e2 / 0.9e1 * t496 * t305 + 0.4e1 / 0.3e1 * t248 * t937 + 0.16e2 / 0.9e1 * t278 * t539 + 0.4e1 / 0.3e1 * t77 * t943);
  t948 = t310 * t310;
  t953 = t313 * t313;
  t962 = my_piecewise3(t81, 0, 0.40e2 / 0.81e2 * t698 * t948 - 0.16e2 / 0.9e1 * t511 * t313 + 0.4e1 / 0.3e1 * t262 * t953 + 0.16e2 / 0.9e1 * t286 * t549 - 0.4e1 / 0.3e1 * t82 * t943);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t559 + t560 + 0.12e2 * t453 + 0.12e2 * t495 + 0.4e1 * t556 + t7 * (t622 + t665 + 0.4e1 * t727 + 0.6e1 * t805 + 0.4e1 * t876 + t69 * (t947 + t962) * t90);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

