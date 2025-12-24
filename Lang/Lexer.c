#include "Core.h"
#include "MinFunctions.c"



void Lexer(
  u8 *File
){
  void *Goto[256] = {
&&End_0, &&Err_1, &&Err_2, &&Err_3, &&Err_4, &&Err_5, &&Err_6,&&Err_7, &&Err_8, &&Err_9, &&_10, &&Err_11, &&Err_12, &&_13, &&Err_14, &&Err_15,
&&Err_16, &&Err_17, &&Err_18, &&Err_19, &&Err_20, &&Err_21, &&Err_22, &&Err_23, &&Err_24, &&Err_25, &&Err_26, &&Err_27, &&Err_28, &&Err_29, &&Err_30, &&Err_31,
&&Space_32, &&_33, &&_34, &&_35, &&_36, &&_37, &&_38, &&_39, &&_40, &&_41, &&_42, &&_43, &&_45, &&_46, &&_47,
&&_48, &&_49, &&_50, &&_51, &&_52, &&_53, &&_54, &&_55, &&_56, &&_57, &&_58, &&_59, &&_60, &&_61, &&_62, &&_63,
&&_64, &&A_65, &&B_66, &&C_67, &&D_68, &&E_69, &&F_70, &&G_71, &&H_72,&&I_73, &&J_74, &&K_75, &&L_76, &&M_77, &&N_78, &&O_79,
&&P_80, &&Q_81, &&R_82, &&S_83, &&T_84, &&U_85, &&V_86, &&W_87, &&X_88, &&Y_89, &&Z_90, &&_91, &&_92, &&_93, &&_94, &&_95,
&&_96, &&a_97, &&b_98, &&c_99, &&d_100, &&e_101, &&f_102, &&g_103, &&h_104, &&i_105, &&j_106, &&k_107, &&l_108, &&m_109, &&n_110, &&o_111,
&&p_112, &&q_113, &&r_114, &&s_115, &&t_116, &&u_117, &&v_118, &&w_119, &&x_120, &&y_121, &&z_122, &&_123, &&_124, &&_125, &&_126, &&Err_127,
&&Err_128, &&Err_129, &&Err_130, &&Err_131, &&Err_132, &&Err_133, &&Err_134, &&Err_135, &&Err_136, &&Err_137, &&Err_138, &&Err_139, &&Err_140, &&Err_141, &&Err_142, &&Err_143,
&&Err_144, &&Err_145, &&Err_146, &&Err_147, &&Err_148, &&Err_149, &&Err_150, &&Err_151, &&Err_152, &&Err_153, &&Err_154, &&Err_155, &&Err_156, &&Err_157, &&Err_158, &&Err_159,
&&Err_160, &&Err_161, &&Err_162, &&Err_163, &&Err_164, &&Err_165, &&Err_166, &&Err_167, &&Err_168, &&Err_169, &&Err_170, &&Err_171, &&Err_172, &&Err_173, &&Err_174, &&Err_175,
&&Err_176, &&Err_177, &&Err_178, &&Err_179, &&Err_180, &&Err_181, &&Err_182, &&Err_183, &&Err_184, &&Err_185, &&Err_186, &&Err_187, &&Err_188, &&Err_189, &&Err_190, &&Err_191,
&&Err_192, &&Err_193, &&Err_194, &&Err_195, &&Err_196, &&Err_197, &&Err_198, &&Err_199, &&Err_200, &&Err_201, &&Err_202, &&Err_203, &&Err_204, &&Err_205, &&Err_206, &&Err_207,
&&Err_208, &&Err_209, &&Err_210, &&Err_211, &&Err_212, &&Err_213, &&Err_214, &&Err_215, &&Err_216, &&Err_217, &&Err_218, &&Err_219, &&Err_220, &&Err_221, &&Err_222, &&Err_223,
&&Err_224, &&Err_225, &&Err_226, &&Err_227, &&Err_228, &&Err_229, &&Err_230, &&Err_231, &&Err_232, &&Err_233, &&Err_234, &&Err_235, &&Err_236, &&Err_237, &&Err_238, &&Err_239,
&&Err_240, &&Err_241, &&Err_242, &&Err_243, &&Err_244, &&Err_245, &&Err_246, &&Err_247, &&Err_248, &&Err_249, &&Err_250, &&Err_251, &&Err_252, &&Err_253, &&Err_254, &&Err_255
  };

  u8 IdentTable[256] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1,
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };

  u8 *Pointer = File;
  u8 Val = 0;
  Stack *String;
  NewStack(&String);
  Stack *Tokens;
  NewStack(&Tokens);

  goto *Goto[*Pointer];

  End_0:
    return;
  Err_1:
  Err_2:
  Err_3:
  Err_4:
  Err_5:
  Err_6:
  Err_7:
  Err_8:
  Err_9:
  _10: //* Simbol = \n
  Err_11:
  Err_12:
  _13: //* Simbol = \r
  Err_14:
  Err_15:
  Err_16:
  Err_17:
  Err_18:
  Err_19:
  Err_20:
  Err_21:
  Err_22:
  Err_23:
  Err_24:
  Err_25:
  Err_26:
  Err_27:
  Err_28:
  Err_29:
  Err_30:
  Err_31:
  Space_32:
  _33: //* Simbol = !
  _34: //* Simbol = #
  _35: //* Simbol = $
  _36: //* Simbol = %
  _37: //* Simbol = &
  _38: //* Simbol = '
  _39: //* Simbol = (
  _40: //* Simbol = )
  _41: //* Simbol = *
  _42: //* Simbol = +
  _43: //* Simbol = ,
  _45: //* Simbol = -
  _46: //* Simbol = .
  _47: //* Simbol = /
  _48: //* Simbol = 0
  _49: //* Simbol = 1
  _50: //* Simbol = 2
  _51: //* Simbol = 3
  _52: //* Simbol = 4
  _53: //* Simbol = 5
  _54: //* Simbol = 6
  _55: //* Simbol = 7
  _56: //* Simbol = 8
  _57: //* Simbol = 9
  _58: //* Simbol = :
  _59: //* Simbol = ;
  _60: //* Simbol = <
  _61: //* Simbol = =
  _62: //* Simbol = >
  _63: //* Simbol = ?
  _64: //* Simbol = @
  A_65:
    ++Pointer;
  B_66:
  C_67:
  D_68:
  E_69:
  F_70:
  G_71:
  H_72:
  I_73:
  J_74:
  K_75:
  L_76:
  M_77:
  N_78:
  O_79:
  P_80:
  Q_81:
  R_82:
  S_83:
  T_84:
  U_85:
  V_86:
  W_87:
  X_88:
  Y_89:
  Z_90:
  _91: //* Simbol = [
  _92: //* Simbol = '\'
  _93: //* Simbol = ]
  _94: //* Simbol = ^
  _95: //* Simbol = _
  _96: //* Simbol = `
  a_97:
  b_98:
  c_99:
  d_100:
  e_101:
  f_102:
  g_103:
  h_104:
  i_105:
  j_106:
  k_107:
  l_108:
  m_109:
  n_110:
  o_111:
  p_112:
  q_113:
  r_114:
  s_115:
  t_116:
  u_117:
    Val = *++Pointer;
    if (Val == 110)
      goto Ln0;
  v_118:
  w_119:
  x_120:
  y_121:
  z_122:
  _123: //* Simbol = {
  _124: //* Simbol = |
  _125: //* Simbol = }
  _126: //* Simbol = ~
  Err_127:
  Err_128:
  Err_129:
  Err_130:
  Err_131:
  Err_132:
  Err_133:
  Err_134:
  Err_135:
  Err_136:
  Err_137:
  Err_138:
  Err_139:
  Err_140:
  Err_141:
  Err_142:
  Err_143:
  Err_144:
  Err_145:
  Err_146:
  Err_147:
  Err_148:
  Err_149:
  Err_150:
  Err_151:
  Err_152:
  Err_153:
  Err_154:
  Err_155:
  Err_156:
  Err_157:
  Err_158:
  Err_159:
  Err_160:
  Err_161:
  Err_162:
  Err_163:
  Err_164:
  Err_165:
  Err_166:
  Err_167:
  Err_168:
  Err_169:
  Err_170:
  Err_171:
  Err_172:
  Err_173:
  Err_174:
  Err_175:
  Err_176:
  Err_177:
  Err_178:
  Err_179:
  Err_180:
  Err_181:
  Err_182:
  Err_183:
  Err_184:
  Err_185:
  Err_186:
  Err_187:
  Err_188:
  Err_189:
  Err_190:
  Err_191:
  Err_192:
  Err_193:
  Err_194:
  Err_195:
  Err_196:
  Err_197:
  Err_198:
  Err_199:
  Err_200:
  Err_201:
  Err_202:
  Err_203:
  Err_204:
  Err_205:
  Err_206:
  Err_207:
  Err_208:
  Err_209:
  Err_210:
  Err_211:
  Err_212:
  Err_213:
  Err_214:
  Err_215:
  Err_216:
  Err_217:
  Err_218:
  Err_219:
  Err_220:
  Err_221:
  Err_222:
  Err_223:
  Err_224:
  Err_225:
  Err_226:
  Err_227:
  Err_228:
  Err_229:
  Err_230:
  Err_231:
  Err_232:
  Err_233:
  Err_234:
  Err_235:
  Err_236:
  Err_237:
  Err_238:
  Err_239:
  Err_240:
  Err_241:
  Err_242:
  Err_243:
  Err_244:
  Err_245:
  Err_246:
  Err_247:
  Err_248:
  Err_249:
  Err_250:
  Err_251:
  Err_252:
  Err_253:
  Err_254:
  Err_255:
  

  Ln0:
    Val = *++Pointer;
    if (Val == 115)
      goto Ls0;
    if (IdentTable[Val]){

    }
  Ls0:
    Val = *++Pointer;
    if (Val == 105)
      goto Li0;
  Li0:
    Val = *++Pointer;
    if (Val == 103)
      goto Lg0;
  Lg0:
    Val = *++Pointer;
    if (Val == 110)
      goto Ln1;
  Ln1:
    Val = *++Pointer;
    if (Val == 101)
      goto Le0;
  Le0:
    Val = *++Pointer;
    if (Val == 100)
      goto Ld0;
  Ld0:
    Val = *++Pointer;
    if (Val == 95)
      goto L_0;
  L_0:
    Val = *++Pointer;
    if (IdentTable[Val]){
      if (Val < 52){
        if (Val == 49)
          goto L1_0;
        if (Val == 51)
          goto L3_0; 
      }
      if (Val == 54)
        goto L6_0;
      if (Val == 56)
        goto L8_0;
      goto LString_0;
    }
  L1_0:
    Val = *++Pointer;
    if (Val == 54)
      goto L6_1;
  L6_1:
    Val = *++Pointer;
    PushStack(Tokens, 2);
  L3_0:
    Val = *++Pointer;
    if (Val == 50)
      goto L2_0;
  L2_0:
    Val = *++Pointer;
    PushStack(Tokens, 3);
  L6_0:
    Val = *++Pointer;
    if (Val == 52)
      goto L4_0;
  L4_0:
    Val = *++Pointer;
    PushStack(Tokens, 5);
  L8_0:
    Val = *++Pointer;
    PushStack(Tokens, 0);
  
  LString_0:

}