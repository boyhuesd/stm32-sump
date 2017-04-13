  /* jump takes too many cycles so the timing isn't completely right.  
   * Include this file multiple times to reduce the number of jumps needed in exchange for more flash space used
   * 20*256=5KB at a time = 50KB flash used, 1 jump needed for 10KB buffer
   * 8*256=2KB at a time = 32KB flash used, 4 jumps needed for 10KB buffer
   * 2KB version will slip ~83ns every ~170us or ~486ppm off one cycle due to jump
   * 2KB version results in a 100KHz synchronus clock from TIM3 showing up as 100.037KHz
   */

    asm(
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #0]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #1]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #2]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #3]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #4]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #5]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #6]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #7]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #8]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #9]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #10]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #11]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #12]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #13]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #14]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #15]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #16]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #17]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #18]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #19]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #20]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #21]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #22]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #23]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #24]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #25]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #26]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #27]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #28]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #29]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #30]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #31]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #32]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #33]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #34]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #35]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #36]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #37]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #38]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #39]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #40]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #41]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #42]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #43]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #44]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #45]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #46]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #47]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #48]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #49]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #50]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #51]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #52]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #53]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #54]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #55]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #56]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #57]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #58]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #59]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #60]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #61]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #62]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #63]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #64]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #65]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #66]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #67]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #68]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #69]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #70]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #71]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #72]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #73]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #74]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #75]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #76]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #77]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #78]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #79]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #80]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #81]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #82]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #83]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #84]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #85]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #86]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #87]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #88]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #89]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #90]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #91]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #92]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #93]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #94]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #95]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #96]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #97]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #98]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #99]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #100]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #101]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #102]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #103]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #104]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #105]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #106]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #107]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #108]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #109]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #110]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #111]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #112]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #113]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #114]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #115]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #116]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #117]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #118]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #119]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #120]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #121]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #122]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #123]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #124]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #125]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #126]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #127]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #128]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #129]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #130]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #131]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #132]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #133]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #134]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #135]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #136]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #137]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #138]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #139]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #140]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #141]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #142]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #143]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #144]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #145]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #146]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #147]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #148]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #149]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #150]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #151]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #152]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #153]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #154]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #155]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #156]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #157]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #158]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #159]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #160]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #161]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #162]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #163]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #164]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #165]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #166]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #167]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #168]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #169]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #170]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #171]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #172]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #173]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #174]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #175]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #176]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #177]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #178]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #179]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #180]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #181]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #182]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #183]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #184]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #185]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #186]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #187]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #188]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #189]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #190]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #191]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #192]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #193]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #194]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #195]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #196]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #197]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #198]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #199]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #200]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #201]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #202]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #203]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #204]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #205]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #206]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #207]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #208]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #209]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #210]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #211]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #212]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #213]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #214]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #215]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #216]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #217]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #218]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #219]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #220]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #221]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #222]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #223]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #224]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #225]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #226]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #227]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #228]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #229]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #230]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #231]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #232]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #233]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #234]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #235]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #236]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #237]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #238]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #239]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #240]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #241]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #242]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #243]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #244]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #245]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #246]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #247]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #248]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #249]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #250]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #251]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #252]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #253]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #254]\n"
      "ldr     r1, [%1]\n"
      "strb    r1, [%0, #255]\n"
    : /* no outputs */
    : "r" (buffer), "r" (&GPIOA->IDR)
    : "r1"
    );
    buffer += 256;
