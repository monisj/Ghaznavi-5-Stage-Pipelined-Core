;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit branchforward : 
  module branchforward : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip id_ex_rd_sel : UInt<5>, flip id_ex_memread : UInt<1>, flip ex_mem_rd_sel : UInt<5>, flip ex_mem_memread : UInt<1>, flip mem_wb_rd_sel : UInt<5>, flip mem_wb_memread : UInt<1>, flip rs1_sel : UInt<5>, flip rs2_sel : UInt<5>, flip ctrl_branch : UInt<1>, forward_a : UInt<4>, forward_b : UInt<4>}
    
    io.forward_a <= UInt<1>("h00") @[branchforward.scala 19:18]
    io.forward_b <= UInt<1>("h00") @[branchforward.scala 20:18]
    node _T_30 = eq(io.ctrl_branch, UInt<1>("h01")) @[branchforward.scala 23:25]
    when _T_30 : @[branchforward.scala 23:34]
      node _T_32 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 25:28]
      node _T_34 = neq(io.id_ex_memread, UInt<1>("h01")) @[branchforward.scala 25:63]
      node _T_35 = and(_T_32, _T_34) @[branchforward.scala 25:43]
      node _T_36 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 25:91]
      node _T_37 = and(_T_35, _T_36) @[branchforward.scala 25:71]
      node _T_38 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 25:127]
      node _T_39 = and(_T_37, _T_38) @[branchforward.scala 25:107]
      when _T_39 : @[branchforward.scala 25:144]
        io.forward_a <= UInt<1>("h01") @[branchforward.scala 26:22]
        io.forward_b <= UInt<1>("h01") @[branchforward.scala 27:22]
        skip @[branchforward.scala 25:144]
      else : @[branchforward.scala 28:115]
        node _T_43 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 28:35]
        node _T_45 = neq(io.id_ex_memread, UInt<1>("h01")) @[branchforward.scala 28:70]
        node _T_46 = and(_T_43, _T_45) @[branchforward.scala 28:50]
        node _T_47 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 28:98]
        node _T_48 = and(_T_46, _T_47) @[branchforward.scala 28:78]
        when _T_48 : @[branchforward.scala 28:115]
          io.forward_a <= UInt<1>("h01") @[branchforward.scala 29:22]
          skip @[branchforward.scala 28:115]
        else : @[branchforward.scala 30:115]
          node _T_51 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 30:35]
          node _T_53 = neq(io.id_ex_memread, UInt<1>("h01")) @[branchforward.scala 30:70]
          node _T_54 = and(_T_51, _T_53) @[branchforward.scala 30:50]
          node _T_55 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 30:98]
          node _T_56 = and(_T_54, _T_55) @[branchforward.scala 30:78]
          when _T_56 : @[branchforward.scala 30:115]
            io.forward_b <= UInt<1>("h01") @[branchforward.scala 31:22]
            skip @[branchforward.scala 30:115]
      node _T_59 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 35:29]
      node _T_61 = neq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 35:65]
      node _T_62 = and(_T_59, _T_61) @[branchforward.scala 35:44]
      node _T_64 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 36:28]
      node _T_65 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 36:64]
      node _T_66 = and(_T_64, _T_65) @[branchforward.scala 36:44]
      node _T_67 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 36:100]
      node _T_68 = and(_T_66, _T_67) @[branchforward.scala 36:80]
      node _T_69 = not(_T_68) @[branchforward.scala 36:9]
      node _T_70 = and(_T_62, _T_69) @[branchforward.scala 35:73]
      node _T_71 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 37:27]
      node _T_72 = and(_T_70, _T_71) @[branchforward.scala 36:117]
      node _T_73 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 37:64]
      node _T_74 = and(_T_72, _T_73) @[branchforward.scala 37:43]
      when _T_74 : @[branchforward.scala 37:81]
        io.forward_a <= UInt<2>("h02") @[branchforward.scala 39:22]
        io.forward_b <= UInt<2>("h02") @[branchforward.scala 40:22]
        skip @[branchforward.scala 37:81]
      else : @[branchforward.scala 44:44]
        node _T_78 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 42:36]
        node _T_80 = neq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 42:72]
        node _T_81 = and(_T_78, _T_80) @[branchforward.scala 42:51]
        node _T_83 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 43:28]
        node _T_84 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 43:64]
        node _T_85 = and(_T_83, _T_84) @[branchforward.scala 43:44]
        node _T_86 = not(_T_85) @[branchforward.scala 43:9]
        node _T_87 = and(_T_81, _T_86) @[branchforward.scala 42:80]
        node _T_88 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 44:27]
        node _T_89 = and(_T_87, _T_88) @[branchforward.scala 43:81]
        when _T_89 : @[branchforward.scala 44:44]
          io.forward_b <= UInt<2>("h02") @[branchforward.scala 46:22]
          skip @[branchforward.scala 44:44]
        else : @[branchforward.scala 50:44]
          node _T_92 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 48:36]
          node _T_94 = neq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 48:72]
          node _T_95 = and(_T_92, _T_94) @[branchforward.scala 48:51]
          node _T_97 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 49:28]
          node _T_98 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 49:64]
          node _T_99 = and(_T_97, _T_98) @[branchforward.scala 49:44]
          node _T_100 = not(_T_99) @[branchforward.scala 49:9]
          node _T_101 = and(_T_95, _T_100) @[branchforward.scala 48:80]
          node _T_102 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 50:27]
          node _T_103 = and(_T_101, _T_102) @[branchforward.scala 49:81]
          when _T_103 : @[branchforward.scala 50:44]
            io.forward_a <= UInt<2>("h02") @[branchforward.scala 52:22]
            skip @[branchforward.scala 50:44]
          else : @[branchforward.scala 56:81]
            node _T_106 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 54:36]
            node _T_108 = eq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 54:72]
            node _T_109 = and(_T_106, _T_108) @[branchforward.scala 54:51]
            node _T_111 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 55:28]
            node _T_112 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 55:64]
            node _T_113 = and(_T_111, _T_112) @[branchforward.scala 55:44]
            node _T_114 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 55:100]
            node _T_115 = and(_T_113, _T_114) @[branchforward.scala 55:80]
            node _T_116 = not(_T_115) @[branchforward.scala 55:9]
            node _T_117 = and(_T_109, _T_116) @[branchforward.scala 54:80]
            node _T_118 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 56:27]
            node _T_119 = and(_T_117, _T_118) @[branchforward.scala 55:117]
            node _T_120 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 56:64]
            node _T_121 = and(_T_119, _T_120) @[branchforward.scala 56:43]
            when _T_121 : @[branchforward.scala 56:81]
              io.forward_a <= UInt<3>("h04") @[branchforward.scala 58:22]
              io.forward_b <= UInt<3>("h04") @[branchforward.scala 59:22]
              skip @[branchforward.scala 56:81]
            else : @[branchforward.scala 63:44]
              node _T_125 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 61:36]
              node _T_127 = eq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 61:72]
              node _T_128 = and(_T_125, _T_127) @[branchforward.scala 61:51]
              node _T_130 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 62:28]
              node _T_131 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 62:64]
              node _T_132 = and(_T_130, _T_131) @[branchforward.scala 62:44]
              node _T_133 = not(_T_132) @[branchforward.scala 62:9]
              node _T_134 = and(_T_128, _T_133) @[branchforward.scala 61:80]
              node _T_135 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 63:27]
              node _T_136 = and(_T_134, _T_135) @[branchforward.scala 62:81]
              when _T_136 : @[branchforward.scala 63:44]
                io.forward_b <= UInt<3>("h04") @[branchforward.scala 65:22]
                skip @[branchforward.scala 63:44]
              else : @[branchforward.scala 69:44]
                node _T_139 = eq(io.ctrl_branch, UInt<1>("h01")) @[branchforward.scala 67:34]
                node _T_141 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 67:62]
                node _T_142 = and(_T_139, _T_141) @[branchforward.scala 67:42]
                node _T_144 = eq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 67:98]
                node _T_145 = and(_T_142, _T_144) @[branchforward.scala 67:77]
                node _T_147 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 68:28]
                node _T_148 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 68:64]
                node _T_149 = and(_T_147, _T_148) @[branchforward.scala 68:44]
                node _T_150 = not(_T_149) @[branchforward.scala 68:9]
                node _T_151 = and(_T_145, _T_150) @[branchforward.scala 67:106]
                node _T_152 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 69:27]
                node _T_153 = and(_T_151, _T_152) @[branchforward.scala 68:81]
                when _T_153 : @[branchforward.scala 69:44]
                  io.forward_a <= UInt<3>("h04") @[branchforward.scala 71:22]
                  skip @[branchforward.scala 69:44]
      node _T_156 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 76:29]
      node _T_158 = neq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 76:65]
      node _T_159 = and(_T_156, _T_158) @[branchforward.scala 76:44]
      node _T_161 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 78:28]
      node _T_162 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 78:64]
      node _T_163 = and(_T_161, _T_162) @[branchforward.scala 78:44]
      node _T_164 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 78:100]
      node _T_165 = and(_T_163, _T_164) @[branchforward.scala 78:80]
      node _T_166 = not(_T_165) @[branchforward.scala 78:9]
      node _T_167 = and(_T_159, _T_166) @[branchforward.scala 76:73]
      node _T_169 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 80:29]
      node _T_170 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 80:66]
      node _T_171 = and(_T_169, _T_170) @[branchforward.scala 80:45]
      node _T_172 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 80:103]
      node _T_173 = and(_T_171, _T_172) @[branchforward.scala 80:82]
      node _T_174 = not(_T_173) @[branchforward.scala 80:9]
      node _T_175 = and(_T_167, _T_174) @[branchforward.scala 78:117]
      node _T_176 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 81:27]
      node _T_177 = and(_T_175, _T_176) @[branchforward.scala 80:120]
      node _T_178 = eq(io.mem_wb_rd_sel, io.rs2_sel) @[branchforward.scala 81:64]
      node _T_179 = and(_T_177, _T_178) @[branchforward.scala 81:43]
      when _T_179 : @[branchforward.scala 81:81]
        io.forward_a <= UInt<2>("h03") @[branchforward.scala 83:22]
        io.forward_b <= UInt<2>("h03") @[branchforward.scala 84:22]
        skip @[branchforward.scala 81:81]
      else : @[branchforward.scala 92:46]
        node _T_183 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 87:36]
        node _T_185 = neq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 87:72]
        node _T_186 = and(_T_183, _T_185) @[branchforward.scala 87:51]
        node _T_188 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 89:30]
        node _T_189 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 89:66]
        node _T_190 = and(_T_188, _T_189) @[branchforward.scala 89:46]
        node _T_191 = not(_T_190) @[branchforward.scala 89:11]
        node _T_192 = and(_T_186, _T_191) @[branchforward.scala 87:80]
        node _T_194 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 91:31]
        node _T_195 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 91:68]
        node _T_196 = and(_T_194, _T_195) @[branchforward.scala 91:47]
        node _T_197 = not(_T_196) @[branchforward.scala 91:11]
        node _T_198 = and(_T_192, _T_197) @[branchforward.scala 89:83]
        node _T_199 = eq(io.mem_wb_rd_sel, io.rs2_sel) @[branchforward.scala 92:29]
        node _T_200 = and(_T_198, _T_199) @[branchforward.scala 91:85]
        when _T_200 : @[branchforward.scala 92:46]
          io.forward_b <= UInt<2>("h03") @[branchforward.scala 94:24]
          skip @[branchforward.scala 92:46]
        else : @[branchforward.scala 102:46]
          node _T_203 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 97:36]
          node _T_205 = neq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 97:72]
          node _T_206 = and(_T_203, _T_205) @[branchforward.scala 97:51]
          node _T_208 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 99:30]
          node _T_209 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 99:66]
          node _T_210 = and(_T_208, _T_209) @[branchforward.scala 99:46]
          node _T_211 = not(_T_210) @[branchforward.scala 99:11]
          node _T_212 = and(_T_206, _T_211) @[branchforward.scala 97:80]
          node _T_214 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 101:31]
          node _T_215 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 101:68]
          node _T_216 = and(_T_214, _T_215) @[branchforward.scala 101:47]
          node _T_217 = not(_T_216) @[branchforward.scala 101:11]
          node _T_218 = and(_T_212, _T_217) @[branchforward.scala 99:83]
          node _T_219 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 102:29]
          node _T_220 = and(_T_218, _T_219) @[branchforward.scala 101:85]
          when _T_220 : @[branchforward.scala 102:46]
            io.forward_a <= UInt<2>("h03") @[branchforward.scala 104:24]
            skip @[branchforward.scala 102:46]
          else : @[branchforward.scala 111:81]
            node _T_223 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 106:38]
            node _T_225 = eq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 106:74]
            node _T_226 = and(_T_223, _T_225) @[branchforward.scala 106:53]
            node _T_228 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 108:28]
            node _T_229 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 108:64]
            node _T_230 = and(_T_228, _T_229) @[branchforward.scala 108:44]
            node _T_231 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 108:100]
            node _T_232 = and(_T_230, _T_231) @[branchforward.scala 108:80]
            node _T_233 = not(_T_232) @[branchforward.scala 108:9]
            node _T_234 = and(_T_226, _T_233) @[branchforward.scala 106:82]
            node _T_236 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 110:29]
            node _T_237 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 110:66]
            node _T_238 = and(_T_236, _T_237) @[branchforward.scala 110:45]
            node _T_239 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 110:103]
            node _T_240 = and(_T_238, _T_239) @[branchforward.scala 110:82]
            node _T_241 = not(_T_240) @[branchforward.scala 110:9]
            node _T_242 = and(_T_234, _T_241) @[branchforward.scala 108:117]
            node _T_243 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 111:27]
            node _T_244 = and(_T_242, _T_243) @[branchforward.scala 110:120]
            node _T_245 = eq(io.mem_wb_rd_sel, io.rs2_sel) @[branchforward.scala 111:64]
            node _T_246 = and(_T_244, _T_245) @[branchforward.scala 111:43]
            when _T_246 : @[branchforward.scala 111:81]
              io.forward_a <= UInt<3>("h05") @[branchforward.scala 113:22]
              io.forward_b <= UInt<3>("h05") @[branchforward.scala 114:22]
              skip @[branchforward.scala 111:81]
            else : @[branchforward.scala 122:46]
              node _T_250 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 117:36]
              node _T_252 = eq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 117:72]
              node _T_253 = and(_T_250, _T_252) @[branchforward.scala 117:51]
              node _T_255 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 119:30]
              node _T_256 = eq(io.id_ex_rd_sel, io.rs2_sel) @[branchforward.scala 119:66]
              node _T_257 = and(_T_255, _T_256) @[branchforward.scala 119:46]
              node _T_258 = not(_T_257) @[branchforward.scala 119:11]
              node _T_259 = and(_T_253, _T_258) @[branchforward.scala 117:80]
              node _T_261 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 121:31]
              node _T_262 = eq(io.ex_mem_rd_sel, io.rs2_sel) @[branchforward.scala 121:68]
              node _T_263 = and(_T_261, _T_262) @[branchforward.scala 121:47]
              node _T_264 = not(_T_263) @[branchforward.scala 121:11]
              node _T_265 = and(_T_259, _T_264) @[branchforward.scala 119:83]
              node _T_266 = eq(io.mem_wb_rd_sel, io.rs2_sel) @[branchforward.scala 122:29]
              node _T_267 = and(_T_265, _T_266) @[branchforward.scala 121:85]
              when _T_267 : @[branchforward.scala 122:46]
                io.forward_b <= UInt<3>("h05") @[branchforward.scala 124:24]
                skip @[branchforward.scala 122:46]
              else : @[branchforward.scala 132:46]
                node _T_270 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 127:36]
                node _T_272 = eq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 127:72]
                node _T_273 = and(_T_270, _T_272) @[branchforward.scala 127:51]
                node _T_275 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 129:30]
                node _T_276 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 129:66]
                node _T_277 = and(_T_275, _T_276) @[branchforward.scala 129:46]
                node _T_278 = not(_T_277) @[branchforward.scala 129:11]
                node _T_279 = and(_T_273, _T_278) @[branchforward.scala 127:80]
                node _T_281 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 131:31]
                node _T_282 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 131:68]
                node _T_283 = and(_T_281, _T_282) @[branchforward.scala 131:47]
                node _T_284 = not(_T_283) @[branchforward.scala 131:11]
                node _T_285 = and(_T_279, _T_284) @[branchforward.scala 129:83]
                node _T_286 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 132:29]
                node _T_287 = and(_T_285, _T_286) @[branchforward.scala 131:84]
                when _T_287 : @[branchforward.scala 132:46]
                  io.forward_a <= UInt<3>("h05") @[branchforward.scala 134:24]
                  skip @[branchforward.scala 132:46]
      skip @[branchforward.scala 23:34]
    else : @[branchforward.scala 140:41]
      node _T_290 = eq(io.ctrl_branch, UInt<1>("h00")) @[branchforward.scala 140:32]
      when _T_290 : @[branchforward.scala 140:41]
        node _T_292 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 142:30]
        node _T_294 = neq(io.id_ex_memread, UInt<1>("h01")) @[branchforward.scala 142:65]
        node _T_295 = and(_T_292, _T_294) @[branchforward.scala 142:45]
        node _T_296 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 142:93]
        node _T_297 = and(_T_295, _T_296) @[branchforward.scala 142:73]
        when _T_297 : @[branchforward.scala 142:109]
          io.forward_a <= UInt<3>("h06") @[branchforward.scala 143:24]
          skip @[branchforward.scala 142:109]
        node _T_300 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 147:31]
        node _T_302 = neq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 147:67]
        node _T_303 = and(_T_300, _T_302) @[branchforward.scala 147:46]
        node _T_305 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 148:30]
        node _T_306 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 148:66]
        node _T_307 = and(_T_305, _T_306) @[branchforward.scala 148:46]
        node _T_308 = not(_T_307) @[branchforward.scala 148:11]
        node _T_309 = and(_T_303, _T_308) @[branchforward.scala 147:75]
        node _T_310 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 149:29]
        node _T_311 = and(_T_309, _T_310) @[branchforward.scala 148:83]
        when _T_311 : @[branchforward.scala 149:46]
          io.forward_a <= UInt<3>("h07") @[branchforward.scala 151:24]
          skip @[branchforward.scala 149:46]
        else : @[branchforward.scala 156:48]
          node _T_314 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 154:38]
          node _T_316 = eq(io.ex_mem_memread, UInt<1>("h01")) @[branchforward.scala 154:74]
          node _T_317 = and(_T_314, _T_316) @[branchforward.scala 154:53]
          node _T_319 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 155:32]
          node _T_320 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 155:68]
          node _T_321 = and(_T_319, _T_320) @[branchforward.scala 155:48]
          node _T_322 = not(_T_321) @[branchforward.scala 155:13]
          node _T_323 = and(_T_317, _T_322) @[branchforward.scala 154:82]
          node _T_324 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 156:31]
          node _T_325 = and(_T_323, _T_324) @[branchforward.scala 155:85]
          when _T_325 : @[branchforward.scala 156:48]
            io.forward_a <= UInt<4>("h09") @[branchforward.scala 158:26]
            skip @[branchforward.scala 156:48]
        node _T_328 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 164:31]
        node _T_330 = neq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 164:67]
        node _T_331 = and(_T_328, _T_330) @[branchforward.scala 164:46]
        node _T_333 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 166:30]
        node _T_334 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 166:66]
        node _T_335 = and(_T_333, _T_334) @[branchforward.scala 166:46]
        node _T_336 = not(_T_335) @[branchforward.scala 166:11]
        node _T_337 = and(_T_331, _T_336) @[branchforward.scala 164:75]
        node _T_339 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 168:31]
        node _T_340 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 168:68]
        node _T_341 = and(_T_339, _T_340) @[branchforward.scala 168:47]
        node _T_342 = not(_T_341) @[branchforward.scala 168:11]
        node _T_343 = and(_T_337, _T_342) @[branchforward.scala 166:83]
        node _T_344 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 169:29]
        node _T_345 = and(_T_343, _T_344) @[branchforward.scala 168:85]
        when _T_345 : @[branchforward.scala 169:46]
          io.forward_a <= UInt<4>("h08") @[branchforward.scala 171:24]
          skip @[branchforward.scala 169:46]
        else : @[branchforward.scala 179:46]
          node _T_348 = neq(io.mem_wb_rd_sel, UInt<1>("h00")) @[branchforward.scala 174:39]
          node _T_350 = eq(io.mem_wb_memread, UInt<1>("h01")) @[branchforward.scala 174:75]
          node _T_351 = and(_T_348, _T_350) @[branchforward.scala 174:54]
          node _T_353 = neq(io.id_ex_rd_sel, UInt<1>("h00")) @[branchforward.scala 176:30]
          node _T_354 = eq(io.id_ex_rd_sel, io.rs1_sel) @[branchforward.scala 176:66]
          node _T_355 = and(_T_353, _T_354) @[branchforward.scala 176:46]
          node _T_356 = not(_T_355) @[branchforward.scala 176:11]
          node _T_357 = and(_T_351, _T_356) @[branchforward.scala 174:83]
          node _T_359 = neq(io.ex_mem_rd_sel, UInt<1>("h00")) @[branchforward.scala 178:31]
          node _T_360 = eq(io.ex_mem_rd_sel, io.rs1_sel) @[branchforward.scala 178:68]
          node _T_361 = and(_T_359, _T_360) @[branchforward.scala 178:47]
          node _T_362 = not(_T_361) @[branchforward.scala 178:11]
          node _T_363 = and(_T_357, _T_362) @[branchforward.scala 176:83]
          node _T_364 = eq(io.mem_wb_rd_sel, io.rs1_sel) @[branchforward.scala 179:29]
          node _T_365 = and(_T_363, _T_364) @[branchforward.scala 178:85]
          when _T_365 : @[branchforward.scala 179:46]
            io.forward_a <= UInt<4>("h0a") @[branchforward.scala 181:24]
            skip @[branchforward.scala 179:46]
        skip @[branchforward.scala 140:41]
    
