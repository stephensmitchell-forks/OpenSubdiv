//
//   Copyright 2019 DreamWorks Animation LLC.
//
//   Licensed under the Apache License, Version 2.0 (the "Apache License")
//   with the following modification; you may not use this file except in
//   compliance with the Apache License and the following modification to it:
//   Section 6. Trademarks. is deleted and replaced with:
//
//   6. Trademarks. This License does not grant permission to use the trade
//      names, trademarks, service marks, or product names of the Licensor
//      and its affiliates, except as required to comply with Section 4(c) of
//      the License and to reproduce the content of the NOTICE file.
//
//   You may obtain a copy of the Apache License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the Apache License with the above modification is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//   KIND, either express or implied. See the Apache License for the specific
//   language governing permissions and limitations under the Apache License.
//

static const std::string catmark_xord_interior =
"#\n"
"#   Nine shapes ordered left->right and top->bottom in the XZ plane\n"
"#\n"
"#   Shape 1:  top-left\n"
"#\n"
"v -1.250000 -0.480000  1.250000\n"
"v -0.950000  0.000000  1.250000\n"
"v -0.950000  0.000000  1.769615\n"
"v -1.400000  0.000000  1.509808\n"
"v -1.850000  0.000000  1.250000\n"
"v -1.400000  0.000000  0.990192\n"
"v -0.950000  0.000000  0.730385\n"
"\n"
"vt  0.170000  0.830000\n"
"vt  0.245000  0.830000\n"
"vt  0.245000  0.959904\n"
"vt  0.132500  0.894952\n"
"vt  0.020000  0.830000\n"
"vt  0.132500  0.765048\n"
"vt  0.245000  0.700096\n"
"\n"
"f  1/1   2/2   3/3   4/4 \n"
"f  1/1   4/4   5/5   6/6 \n"
"f  1/1   6/6   7/7   2/2 \n"
"\n"
"#\n"
"#   Shape 2:  top-middle\n"
"#\n"
"v  0.000000 -0.480000  1.250000\n"
"v  0.485410  0.000000  1.250000\n"
"v  0.485410  0.000000  1.602671\n"
"v  0.150000  0.000000  1.711653\n"
"v -0.185410  0.000000  1.820634\n"
"v -0.392705  0.000000  1.535317\n"
"v -0.600000  0.000000  1.250000\n"
"v -0.392705  0.000000  0.964683\n"
"v -0.185410  0.000000  0.679366\n"
"v  0.150000  0.000000  0.788347\n"
"v  0.485410  0.000000  0.897329\n"
"\n"
"vt  0.500000  0.830000\n"
"vt  0.621353  0.830000\n"
"vt  0.621353  0.918168\n"
"vt  0.537500  0.945413\n"
"vt  0.453647  0.972658\n"
"vt  0.401824  0.901329\n"
"vt  0.350000  0.830000\n"
"vt  0.401824  0.758671\n"
"vt  0.453647  0.687342\n"
"vt  0.537500  0.714587\n"
"vt  0.621353  0.741832\n"
"\n"
"f  8/8   9/9  10/10 11/11\n"
"f  8/8  11/11 12/12 13/13\n"
"f  8/8  13/13 14/14 15/15\n"
"f  8/8  15/15 16/16 17/17\n"
"f  8/8  17/17 18/18  9/9 \n"
"\n"
"#\n"
"#   Shape 3:  top-right\n"
"#\n"
"v  1.250000 -0.480000  1.250000\n"
"v  1.769615  0.000000  1.250000\n"
"v  1.769615  0.000000  1.550000\n"
"v  1.509808  0.000000  1.700000\n"
"v  1.250000  0.000000  1.850000\n"
"v  0.990192  0.000000  1.700000\n"
"v  0.730385  0.000000  1.550000\n"
"v  0.730385  0.000000  1.250000\n"
"v  0.730385  0.000000  0.950000\n"
"v  0.990192  0.000000  0.800000\n"
"v  1.250000  0.000000  0.650000\n"
"v  1.509808  0.000000  0.800000\n"
"v  1.769615  0.000000  0.950000\n"
"\n"
"vt  0.830000  0.830000\n"
"vt  0.959904  0.830000\n"
"vt  0.959904  0.905000\n"
"vt  0.894952  0.942500\n"
"vt  0.830000  0.980000\n"
"vt  0.765048  0.942500\n"
"vt  0.700096  0.905000\n"
"vt  0.700096  0.830000\n"
"vt  0.700096  0.755000\n"
"vt  0.765048  0.717500\n"
"vt  0.830000  0.680000\n"
"vt  0.894952  0.717500\n"
"vt  0.959904  0.755000\n"
"\n"
"f 19/19 20/20 21/21 22/22\n"
"f 19/19 22/22 23/23 24/24\n"
"f 19/19 24/24 25/25 26/26\n"
"f 19/19 26/26 27/27 28/28\n"
"f 19/19 28/28 29/29 30/30\n"
"f 19/19 30/30 31/31 20/20\n"
"\n"
"#\n"
"#   Shape 4:  center-left\n"
"#\n"
"v -1.250000 -0.480000  0.000000\n"
"v -0.709419  0.000000  0.000000\n"
"v -0.709419  0.000000  0.260330\n"
"v -0.912953  0.000000  0.422644\n"
"v -1.116488  0.000000  0.584957\n"
"v -1.370291  0.000000  0.527028\n"
"v -1.624094  0.000000  0.469099\n"
"v -1.737047  0.000000  0.234549\n"
"v -1.850000  0.000000 -0.000000\n"
"v -1.737047  0.000000 -0.234549\n"
"v -1.624094  0.000000 -0.469099\n"
"v -1.370291  0.000000 -0.527028\n"
"v -1.116487  0.000000 -0.584957\n"
"v -0.912953  0.000000 -0.422643\n"
"v -0.709419  0.000000 -0.260330\n"
"\n"
"vt  0.170000  0.500000\n"
"vt  0.305145  0.500000\n"
"vt  0.305145  0.565083\n"
"vt  0.254262  0.605661\n"
"vt  0.203378  0.646239\n"
"vt  0.139927  0.631757\n"
"vt  0.076477  0.617275\n"
"vt  0.048238  0.558637\n"
"vt  0.020000  0.500000\n"
"vt  0.048238  0.441363\n"
"vt  0.076477  0.382725\n"
"vt  0.139927  0.368243\n"
"vt  0.203378  0.353761\n"
"vt  0.254262  0.394339\n"
"vt  0.305145  0.434918\n"
"\n"
"f 32/32 33/33 34/34 35/35\n"
"f 32/32 35/35 36/36 37/37\n"
"f 32/32 37/37 38/38 39/39\n"
"f 32/32 39/39 40/40 41/41\n"
"f 32/32 41/41 42/42 43/43\n"
"f 32/32 43/43 44/44 45/45\n"
"f 32/32 45/45 46/46 33/33\n"
"\n"
"#\n"
"#   Shape 5:  center-middle\n"
"#\n"
"v  0.000000 -0.480000  0.000000\n"
"v  0.554328  0.000000  0.000000\n"
"v  0.554328  0.000000  0.229610\n"
"v  0.391969  0.000000  0.391969\n"
"v  0.229610  0.000000  0.554328\n"
"v -0.000000  0.000000  0.554328\n"
"v -0.229610  0.000000  0.554328\n"
"v -0.391969  0.000000  0.391969\n"
"v -0.554328  0.000000  0.229610\n"
"v -0.554328  0.000000 -0.000000\n"
"v -0.554328  0.000000 -0.229610\n"
"v -0.391969  0.000000 -0.391969\n"
"v -0.229610  0.000000 -0.554328\n"
"v  0.000000  0.000000 -0.554328\n"
"v  0.229610  0.000000 -0.554328\n"
"v  0.391969  0.000000 -0.391969\n"
"v  0.554328  0.000000 -0.229610\n"
"\n"
"vt  0.500000  0.500000\n"
"vt  0.638582  0.500000\n"
"vt  0.638582  0.557402\n"
"vt  0.597992  0.597992\n"
"vt  0.557402  0.638582\n"
"vt  0.500000  0.638582\n"
"vt  0.442597  0.638582\n"
"vt  0.402008  0.597992\n"
"vt  0.361418  0.557403\n"
"vt  0.361418  0.500000\n"
"vt  0.361418  0.442597\n"
"vt  0.402008  0.402008\n"
"vt  0.442598  0.361418\n"
"vt  0.500000  0.361418\n"
"vt  0.557403  0.361418\n"
"vt  0.597992  0.402008\n"
"vt  0.638582  0.442598\n"
"\n"
"f 47/47 48/48 49/49 50/50\n"
"f 47/47 50/50 51/51 52/52\n"
"f 47/47 52/52 53/53 54/54\n"
"f 47/47 54/54 55/55 56/56\n"
"f 47/47 56/56 57/57 58/58\n"
"f 47/47 58/58 59/59 60/60\n"
"f 47/47 60/60 61/61 62/62\n"
"f 47/47 62/62 63/63 48/48\n"
"\n"
"#\n"
"#   Shape 6:  center-right\n"
"#\n"
"v  1.250000 -0.480000  0.000000\n"
"v  1.813816  0.000000  0.000000\n"
"v  1.813816  0.000000  0.205212\n"
"v  1.681908  0.000000  0.362414\n"
"v  1.550000  0.000000  0.519615\n"
"v  1.347906  0.000000  0.555250\n"
"v  1.145811  0.000000  0.590885\n"
"v  0.968092  0.000000  0.488279\n"
"v  0.790373  0.000000  0.385673\n"
"v  0.720187  0.000000  0.192836\n"
"v  0.650000  0.000000 -0.000000\n"
"v  0.720187  0.000000 -0.192836\n"
"v  0.790373  0.000000 -0.385673\n"
"v  0.968092  0.000000 -0.488279\n"
"v  1.145811  0.000000 -0.590885\n"
"v  1.347906  0.000000 -0.555250\n"
"v  1.550000  0.000000 -0.519615\n"
"v  1.681908  0.000000 -0.362414\n"
"v  1.813816  0.000000 -0.205212\n"
"\n"
"vt  0.830000  0.500000\n"
"vt  0.970954  0.500000\n"
"vt  0.970954  0.551303\n"
"vt  0.937977  0.590603\n"
"vt  0.905000  0.629904\n"
"vt  0.854476  0.638812\n"
"vt  0.803953  0.647721\n"
"vt  0.759523  0.622070\n"
"vt  0.715093  0.596418\n"
"vt  0.697547  0.548209\n"
"vt  0.680000  0.500000\n"
"vt  0.697547  0.451791\n"
"vt  0.715093  0.403582\n"
"vt  0.759523  0.377930\n"
"vt  0.803953  0.352279\n"
"vt  0.854476  0.361188\n"
"vt  0.905000  0.370096\n"
"vt  0.937977  0.409397\n"
"vt  0.970954  0.448697\n"
"\n"
"f 64/64 65/65 66/66 67/67\n"
"f 64/64 67/67 68/68 69/69\n"
"f 64/64 69/69 70/70 71/71\n"
"f 64/64 71/71 72/72 73/73\n"
"f 64/64 73/73 74/74 75/75\n"
"f 64/64 75/75 76/76 77/77\n"
"f 64/64 77/77 78/78 79/79\n"
"f 64/64 79/79 80/80 81/81\n"
"f 64/64 81/81 82/82 65/65\n"
"\n"
"#\n"
"#   Shape 7:  bottom-left\n"
"#\n"
"v -1.250000 -0.480000 -1.250000\n"
"v -0.679366  0.000000 -1.250000\n"
"v -0.679366  0.000000 -1.064590\n"
"v -0.788347  0.000000 -0.914590\n"
"v -0.897329  0.000000 -0.764590\n"
"v -1.073664  0.000000 -0.707295\n"
"v -1.250000  0.000000 -0.650000\n"
"v -1.426336  0.000000 -0.707295\n"
"v -1.602671  0.000000 -0.764590\n"
"v -1.711653  0.000000 -0.914590\n"
"v -1.820634  0.000000 -1.064590\n"
"v -1.820634  0.000000 -1.250000\n"
"v -1.820634  0.000000 -1.435410\n"
"v -1.711653  0.000000 -1.585410\n"
"v -1.602671  0.000000 -1.735410\n"
"v -1.426336  0.000000 -1.792705\n"
"v -1.250000  0.000000 -1.850000\n"
"v -1.073664  0.000000 -1.792705\n"
"v -0.897329  0.000000 -1.735410\n"
"v -0.788347  0.000000 -1.585410\n"
"v -0.679366  0.000000 -1.435410\n"
"\n"
"vt  0.170000  0.170000\n"
"vt  0.312658  0.170000\n"
"vt  0.312658  0.216353\n"
"vt  0.285413  0.253853\n"
"vt  0.258168  0.291353\n"
"vt  0.214084  0.305676\n"
"vt  0.170000  0.320000\n"
"vt  0.125916  0.305676\n"
"vt  0.081832  0.291353\n"
"vt  0.054587  0.253853\n"
"vt  0.027342  0.216353\n"
"vt  0.027342  0.170000\n"
"vt  0.027342  0.123647\n"
"vt  0.054587  0.086147\n"
"vt  0.081832  0.048647\n"
"vt  0.125916  0.034324\n"
"vt  0.170000  0.020000\n"
"vt  0.214084  0.034324\n"
"vt  0.258168  0.048647\n"
"vt  0.285413  0.086147\n"
"vt  0.312659  0.123648\n"
"\n"
"f  83/83   84/84   85/85   86/86 \n"
"f  83/83   86/86   87/87   88/88 \n"
"f  83/83   88/88   89/89   90/90 \n"
"f  83/83   90/90   91/91   92/92 \n"
"f  83/83   92/92   93/93   94/94 \n"
"f  83/83   94/94   95/95   96/96 \n"
"f  83/83   96/96   97/97   98/98 \n"
"f  83/83   98/98   99/99  100/100\n"
"f  83/83  100/100 101/101 102/102\n"
"f  83/83  102/102 103/103  84/84 \n"
"\n"
"#\n"
"#   Shape 8:  bottom-middle\n"
"#\n"
"v  0.000000 -0.480000 -1.250000\n"
"v  0.575696  0.000000 -1.250000\n"
"v  0.575696  0.000000 -1.080960\n"
"v  0.484306  0.000000 -0.938755\n"
"v  0.392916  0.000000 -0.796550\n"
"v  0.239153  0.000000 -0.726329\n"
"v  0.085389  0.000000 -0.656107\n"
"v -0.081930  0.000000 -0.680164\n"
"v -0.249249  0.000000 -0.704221\n"
"v -0.377001  0.000000 -0.814918\n"
"v -0.504752  0.000000 -0.925616\n"
"v -0.552376  0.000000 -1.087808\n"
"v -0.600000  0.000000 -1.250000\n"
"v -0.552376  0.000000 -1.412192\n"
"v -0.504752  0.000000 -1.574385\n"
"v -0.377000  0.000000 -1.685082\n"
"v -0.249249  0.000000 -1.795779\n"
"v -0.081930  0.000000 -1.819836\n"
"v  0.085389  0.000000 -1.843893\n"
"v  0.239153  0.000000 -1.773671\n"
"v  0.392916  0.000000 -1.703450\n"
"v  0.484306  0.000000 -1.561244\n"
"v  0.575696  0.000000 -1.419039\n"
"\n"
"vt  0.500000  0.170000\n"
"vt  0.643924  0.170000\n"
"vt  0.643924  0.212260\n"
"vt  0.621077  0.247811\n"
"vt  0.598229  0.283362\n"
"vt  0.559788  0.300918\n"
"vt  0.521347  0.318473\n"
"vt  0.479517  0.312459\n"
"vt  0.437688  0.306445\n"
"vt  0.405750  0.278770\n"
"vt  0.373812  0.251096\n"
"vt  0.361906  0.210548\n"
"vt  0.350000  0.170000\n"
"vt  0.361906  0.129452\n"
"vt  0.373812  0.088904\n"
"vt  0.405750  0.061230\n"
"vt  0.437688  0.033555\n"
"vt  0.479518  0.027541\n"
"vt  0.521347  0.021527\n"
"vt  0.559788  0.039082\n"
"vt  0.598229  0.056638\n"
"vt  0.621077  0.092189\n"
"vt  0.643924  0.127740\n"
"\n"
"f 104/104 105/105 106/106 107/107\n"
"f 104/104 107/107 108/108 109/109\n"
"f 104/104 109/109 110/110 111/111\n"
"f 104/104 111/111 112/112 113/113\n"
"f 104/104 113/113 114/114 115/115\n"
"f 104/104 115/115 116/116 117/117\n"
"f 104/104 117/117 118/118 119/119\n"
"f 104/104 119/119 120/120 121/121\n"
"f 104/104 121/121 122/122 123/123\n"
"f 104/104 123/123 124/124 125/125\n"
"f 104/104 125/125 126/126 105/105\n"
"\n"
"#\n"
"#   Shape 9:  bottom-right\n"
"#\n"
"v  1.250000 -0.480000 -1.250000\n"
"v  1.829556  0.000000 -1.250000\n"
"v  1.829556  0.000000 -1.094709\n"
"v  1.751910  0.000000 -0.960222\n"
"v  1.674264  0.000000 -0.825736\n"
"v  1.539778  0.000000 -0.748090\n"
"v  1.405291  0.000000 -0.670444\n"
"v  1.250000  0.000000 -0.670444\n"
"v  1.094708  0.000000 -0.670444\n"
"v  0.960222  0.000000 -0.748090\n"
"v  0.825736  0.000000 -0.825736\n"
"v  0.748090  0.000000 -0.960222\n"
"v  0.670444  0.000000 -1.094709\n"
"v  0.670444  0.000000 -1.250000\n"
"v  0.670444  0.000000 -1.405291\n"
"v  0.748090  0.000000 -1.539778\n"
"v  0.825736  0.000000 -1.674264\n"
"v  0.960222  0.000000 -1.751910\n"
"v  1.094709  0.000000 -1.829556\n"
"v  1.250000  0.000000 -1.829556\n"
"v  1.405291  0.000000 -1.829556\n"
"v  1.539778  0.000000 -1.751910\n"
"v  1.674264  0.000000 -1.674264\n"
"v  1.751910  0.000000 -1.539778\n"
"v  1.829556  0.000000 -1.405291\n"
"\n"
"vt  0.830000  0.170000\n"
"vt  0.974889  0.170000\n"
"vt  0.974889  0.208823\n"
"vt  0.955477  0.242444\n"
"vt  0.936066  0.276066\n"
"vt  0.902444  0.295477\n"
"vt  0.868823  0.314889\n"
"vt  0.830000  0.314889\n"
"vt  0.791177  0.314889\n"
"vt  0.757556  0.295477\n"
"vt  0.723934  0.276066\n"
"vt  0.704523  0.242444\n"
"vt  0.685111  0.208823\n"
"vt  0.685111  0.170000\n"
"vt  0.685111  0.131177\n"
"vt  0.704523  0.097556\n"
"vt  0.723934  0.063934\n"
"vt  0.757556  0.044523\n"
"vt  0.791177  0.025111\n"
"vt  0.830000  0.025111\n"
"vt  0.868823  0.025111\n"
"vt  0.902444  0.044523\n"
"vt  0.936066  0.063934\n"
"vt  0.955477  0.097556\n"
"vt  0.974889  0.131177\n"
"\n"
"f 127/127 128/128 129/129 130/130\n"
"f 127/127 130/130 131/131 132/132\n"
"f 127/127 132/132 133/133 134/134\n"
"f 127/127 134/134 135/135 136/136\n"
"f 127/127 136/136 137/137 138/138\n"
"f 127/127 138/138 139/139 140/140\n"
"f 127/127 140/140 141/141 142/142\n"
"f 127/127 142/142 143/143 144/144\n"
"f 127/127 144/144 145/145 146/146\n"
"f 127/127 146/146 147/147 148/148\n"
"f 127/127 148/148 149/149 150/150\n"
"f 127/127 150/150 151/151 128/128\n"
"\n"
"t interpolateboundary 1/0/0 1\n"
"\n"
;