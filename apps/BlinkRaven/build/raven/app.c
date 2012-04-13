#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.3.5/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 431 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2b0e9c8b1020, const void *arg_0x2b0e9c8b12f8, size_t arg_0x2b0e9c8b15a0);



extern void *memset(void *arg_0x2b0e9c8bb020, int arg_0x2b0e9c8bb288, size_t arg_0x2b0e9c8bb530);
#line 133
extern size_t strlen(const char *arg_0x2b0e9c8c7758) __attribute((__pure__)) ;
# 71 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b0e9c8db838, const void *arg_0x2b0e9c8dbb10);
# 23 "/opt/tinyos-2.1.1/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 244 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 40 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/lib/gcc/avr/4.3.5/../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 91 "/opt/tinyos-2.1.1/tos/chips/atm1284/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 111
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 121
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 156
#line 148
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-2.1.1/tos/chips/atm1284/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_1, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;








#line 200
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t resv1 : 3;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4261 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4262 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4263 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 81 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm128Timer.h"
enum __nesc_unnamed4264 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4265 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4266 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4267 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4268 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4269 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4270 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4289 {

  uint8_t flat;
  struct __nesc_unnamed4290 {
    uint8_t wgm01 : 2;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4291 {

  uint8_t flat;
  struct __nesc_unnamed4292 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;










#line 302
typedef union __nesc_unnamed4293 {

  uint8_t flat;
  struct __nesc_unnamed4294 {
    uint8_t resv1 : 6;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 324
#line 313
typedef union __nesc_unnamed4295 {

  uint8_t flat;
  struct __nesc_unnamed4296 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 2;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 338
#line 327
typedef union __nesc_unnamed4297 {

  uint8_t flat;
  struct __nesc_unnamed4298 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 2;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 350
#line 341
typedef union __nesc_unnamed4299 {

  uint8_t flat;
  struct __nesc_unnamed4300 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
# 85 "/opt/tinyos-2.1.1/tos/platforms/raven/MicaTimer.h"
typedef struct __nesc_unnamed4301 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4302 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4303 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4304 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4305 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4306 {
  PLATFORM_MHZ = 8
};
# 65 "/opt/tinyos-2.1.1/tos/platforms/raven/hardware.h"
enum __nesc_unnamed4307 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4308 {
  PLATFORM_BAUDRATE = 38400L
};
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4309 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 131 "/opt/tinyos-2.1.1/tos/platforms/raven/raven.h"
#line 43
typedef enum __nesc_unnamed4310 {

  SIPC_CMD_ID_LCD_SYMB_RAVEN_ON = 0x00, 
  SIPC_CMD_ID_LCD_SYMB_RAVEN_OFF = 0x01, 

  SIPC_CMD_ID_LCD_SYMB_BELL_ON = 0x02, 
  SIPC_CMD_ID_LCD_SYMB_BELL_OFF = 0x03, 

  SIPC_CMD_ID_LCD_SYMB_TONE_ON = 0x04, 
  SIPC_CMD_ID_LCD_SYMB_TONE_OFF = 0x05, 

  SIPC_CMD_ID_LCD_SYMB_MIC_ON = 0x06, 
  SIPC_CMD_ID_LCD_SYMB_MIC_OFF = 0x07, 

  SIPC_CMD_ID_LCD_SYMB_SPEAKER_ON = 0x08, 
  SIPC_CMD_ID_LCD_SYMB_SPEAKER_OFF = 0x09, 

  SIPC_CMD_ID_LCD_SYMB_KEY_ON = 0x0a, 
  SIPC_CMD_ID_LCD_SYMB_KEY_OFF = 0x0b, 

  SIPC_CMD_ID_LCD_SYMB_ATT_ON = 0x0c, 
  SIPC_CMD_ID_LCD_SYMB_ATT_OFF = 0x0d, 

  SIPC_CMD_ID_LCD_SYMB_SPACE_SUN = 0x0e, 
  SIPC_CMD_ID_LCD_SYMB_SPACE_MOON = 0x0f, 
  SIPC_CMD_ID_LCD_SYMB_SPACE_OFF = 0x10, 

  SIPC_CMD_ID_LCD_SYMB_CLOCK_AM = 0x11, 
  SIPC_CMD_ID_LCD_SYMB_CLOCK_PM = 0x12, 
  SIPC_CMD_ID_LCD_SYMB_CLOCK_OFF = 0x13, 

  SIPC_CMD_ID_LCD_SYMB_TRX_RX = 0x14, 
  SIPC_CMD_ID_LCD_SYMB_TRX_TX = 0x15, 
  SIPC_CMD_ID_LCD_SYMB_TRX_OFF = 0x16, 

  SIPC_CMD_ID_LCD_SYMB_IP_ON = 0x17, 
  SIPC_CMD_ID_LCD_SYMB_IP_OFF = 0x18, 

  SIPC_CMD_ID_LCD_SYMB_PAN_ON = 0x19, 
  SIPC_CMD_ID_LCD_SYMB_PAN_OFF = 0x1a, 

  SIPC_CMD_ID_LCD_SYMB_ZLINK_ON = 0x1b, 
  SIPC_CMD_ID_LCD_SYMB_ZLINK_OFF = 0x1c, 

  SIPC_CMD_ID_LCD_SYMB_ZIGBEE_ON = 0x1d, 
  SIPC_CMD_ID_LCD_SYMB_ZIGBEE_OFF = 0x1e, 

  SIPC_CMD_ID_LCD_SYMB_ANTENNA_LEVEL_0 = 0x1f, 
  SIPC_CMD_ID_LCD_SYMB_ANTENNA_LEVEL_1 = 0x20, 
  SIPC_CMD_ID_LCD_SYMB_ANTENNA_LEVEL_2 = 0x21, 
  SIPC_CMD_ID_LCD_SYMB_ANTENNA_OFF = 0x22, 



  SIPC_CMD_ID_LCD_SYMB_ENV_OPEN = 0x23, 
  SIPC_CMD_ID_LCD_SYMB_ENV_CLOSE = 0x24, 
  SIPC_CMD_ID_LCD_SYMB_ENV_OFF = 0x25, 

  SIPC_CMD_ID_LCD_SYMB_TEMP_CELSIUS = 0x26, 
  SIPC_CMD_ID_LCD_SYMB_TEMP_FAHRENHEIT = 0x27, 
  SIPC_CMD_ID_LCD_SYMB_TEMP_OFF = 0x28, 

  SIPC_CMD_ID_LCD_SYMB_MINUS_ON = 0x29, 
  SIPC_CMD_ID_LCD_SYMB_MINUS_OFF = 0x2a, 

  SIPC_CMD_ID_LCD_SYMB_DOT_ON = 0x2b, 
  SIPC_CMD_ID_LCD_SYMB_DOT_OFF = 0x2c, 

  SIPC_CMD_ID_LCD_SYMB_COL_ON = 0x2d, 
  SIPC_CMD_ID_LCD_SYMB_COL_OFF = 0x2e, 


  SIPC_CMD_ID_LED_ON = 0x2f, 
  SIPC_CMD_ID_LED_TOGGLE = 0x30, 
  SIPC_CMD_ID_LED_OFF = 0x31, 


  SIPC_CMD_ID_LCD_MAX = 0x32, 


  SIPC_CMD_ID_MSG = 0x33, 
  SIPC_CMD_ID_HEX = 0x34, 

  SIPC_CMD_WITH_ANSWER = 0x7f, 


  SIPC_CMD_ID_READ_TEMPERATURE = 0x80, 
  SIPC_CMD_ID_READ_BATTERY = 0x81
} SipcCmdId_t;




#line 133
typedef enum __nesc_unnamed4311 {
  SIPC_ANSWER_ID_TEMPERATURE = 1, 
  SIPC_ANSWER_ID_BATTERY = 2
} SipcAnswerId_t;






#line 138
typedef enum __nesc_unnamed4312 {
  SIPC_SOF = 0x02, 
  SIPC_EOF = 0x03, 
  SIPC_ESC = 0x17, 
  SIPC_ESC_MASK = 0x40
} SipcCtl_t;









#line 145
typedef enum __nesc_unnamed4313 {
  SIPC_HEX1 = 0x01, 
  SIPC_HEX2 = 0x02, 
  SIPC_HEX3 = 0x04, 
  SIPC_HEX4 = 0x08, 
  SIPC_HEXNONE = 0x00, 
  SIPC_HEXAUTO = 0x10, 
  SIPC_HEXALL = ((SIPC_HEX1 | SIPC_HEX2) | SIPC_HEX3) | SIPC_HEX4
} SipcHexMask_t;
# 29 "/opt/tinyos-2.1.1/tos/types/IeeeEui64.h"
enum __nesc_unnamed4314 {
#line 29
  IEEE_EUI64_LENGTH = 8
};


#line 31
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4315 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4316 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4317 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4318 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4319 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4320 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4321 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4322 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 40 "/opt/tinyos-2.1.1/tos/types/I2C.h"
typedef struct __nesc_unnamed4323 {
} 
#line 40
TI2CExtdAddr;
typedef struct __nesc_unnamed4324 {
} 
#line 41
TI2CBasicAddr;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4325 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04
};
# 35 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.h"
enum __nesc_unnamed4326 {
  ATM128_I2C_BUSERROR = 0x00, 
  ATM128_I2C_START = 0x08, 
  ATM128_I2C_RSTART = 0x10, 
  ATM128_I2C_MW_SLA_ACK = 0x18, 
  ATM128_I2C_MW_SLA_NACK = 0x20, 
  ATM128_I2C_MW_DATA_ACK = 0x28, 
  ATM128_I2C_MW_DATA_NACK = 0x30, 
  ATM128_I2C_M_ARB_LOST = 0x38, 
  ATM128_I2C_MR_SLA_ACK = 0x40, 
  ATM128_I2C_MR_SLA_NACK = 0x48, 
  ATM128_I2C_MR_DATA_ACK = 0x50, 
  ATM128_I2C_MR_DATA_NACK = 0x58
};
# 33 "/opt/tinyos-2.1.1/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli BlinkRavenC__Timer0__precision_tag;
typedef TMilli BlinkRavenC__Timer1__precision_tag;
typedef TMilli BlinkRavenC__Timer2__precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4327 {
  HilTimerMilliC__TIMER_COUNT = 3U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1284Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1284Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TI2CBasicAddr RavenIeeeEui64P__I2CPacket__addr_size;
enum /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0____nesc_unnamed4328 {
  Atm128I2CMasterC__0__CLIENT_ID = 0U
};
enum Atm128I2CMasterP____nesc_unnamed4329 {
  Atm128I2CMasterP__ATM128_I2C_CLIENT_COUNT = 1U
};
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__addr_size;
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__SubInit__default__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0e9ca0e108);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0e9ca0e108);
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 61
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 54
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkRavenC__Timer0__fired(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void BlinkRavenC__Boot__booted(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkRavenC__Timer1__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void BlinkRavenC__waitforeui__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkRavenC__Timer2__fired(void );
# 95 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
static void BlinkRavenC__Raven__temperature(
#line 93
int16_t celsius);
#line 88
static void BlinkRavenC__Raven__battery(
#line 86
uint16_t voltage);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 72
static void LedsP__Leds__led1Toggle(void );
#line 89
static void LedsP__Leds__led2Toggle(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RavenP__SoftwareInit__init(void );
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void RavenP__UartStream__receivedByte(uint8_t byte);
#line 99
static void RavenP__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void RavenP__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void RavenP__received__runTask(void );
# 71 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
static error_t RavenP__Raven__msg(
#line 67
const char *msg);
#line 81
static error_t RavenP__Raven__hex(
#line 76
const uint16_t n, 
const uint8_t mask);
#line 62
static error_t RavenP__Raven__cmd(
#line 58
uint8_t cmd);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
#line 65
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__enableReceiveInterrupt(void );






static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__disableReceiveInterrupt(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );
#line 74
static error_t HplAtm128UartP__Uart0TxControl__start(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__stop(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Init__init(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__get(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__overflow(void );
# 89 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1284Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1284Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 81
static void HplAtm1284Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1284Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerAsync.nc"
static void HplAtm1284Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1284Timer2AsyncP__TimerAsync__compareABusy(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1284Timer2AsyncP__Compare__size_type HplAtm1284Timer2AsyncP__Compare__get(void );





static void HplAtm1284Timer2AsyncP__Compare__set(HplAtm1284Timer2AsyncP__Compare__size_type t);










static void HplAtm1284Timer2AsyncP__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1284Timer2AsyncP__Timer__timer_size HplAtm1284Timer2AsyncP__Timer__get(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b0e9ce7dda0);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b0e9ce7dda0, 
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 37 "/opt/tinyos-2.1.1/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t RavenIeeeEui64P__LocalIeeeEui64__getId(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RavenIeeeEui64P__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void RavenIeeeEui64P__Boot__booted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void RavenIeeeEui64P__Resource__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void RavenIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void RavenIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5e020);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5c340);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5c340);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf60d40);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf60d40);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfb19c8);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfb19c8);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfb19c8);
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__read(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 101
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfcc020);
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void );









static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void );
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP__I2C__readCurrent(void );
static void HplAtm128I2CBusP__I2C__sendCommand(void );




static void HplAtm128I2CBusP__I2C__setStart(bool on);
#line 45
static uint8_t HplAtm128I2CBusP__I2C__status(void );
#line 60
static void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable);
#line 82
static uint8_t HplAtm128I2CBusP__I2C__read(void );
#line 42
static void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown);
#line 57
static void HplAtm128I2CBusP__I2C__enableAck(bool enable);
#line 76
static void HplAtm128I2CBusP__I2C__enable(bool on);




static void HplAtm128I2CBusP__I2C__write(uint8_t data);
#line 43
static void HplAtm128I2CBusP__I2C__off(void );
#line 55
static void HplAtm128I2CBusP__I2C__setStop(bool on);
#line 74
static void HplAtm128I2CBusP__I2C__setInterruptPending(bool on);
# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void NoLedsC__Leds__led1On(void );
#line 78
static void NoLedsC__Leds__led2On(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 48 "/opt/tinyos-2.1.1/tos/platforms/raven/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 51 "/opt/tinyos-2.1.1/tos/platforms/raven/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );



static inline error_t MotePlatformP__SubInit__default__init(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput(void );
# 68 "/opt/tinyos-2.1.1/tos/platforms/raven/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4330 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 155
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 61
static void RealMainP__Scheduler__taskLoop(void );
#line 54
static bool RealMainP__Scheduler__runNextTask(void );
# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b0e9ca0e108);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4331 {

  SchedulerBasicP__NUM_TASKS = 5U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 86
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 159
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 94 "/opt/tinyos-2.1.1/tos/chips/atm1284/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 142
static inline void McuSleepC__McuSleep__sleep(void );
#line 156
static inline void McuSleepC__McuPowerState__update(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkRavenC__Timer0__startPeriodic(uint32_t dt);
#line 53
static void BlinkRavenC__Timer1__startPeriodic(uint32_t dt);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t BlinkRavenC__waitforeui__postTask(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void BlinkRavenC__Leds__led0Toggle(void );
#line 72
static void BlinkRavenC__Leds__led1Toggle(void );
#line 89
static void BlinkRavenC__Leds__led2Toggle(void );
# 37 "/opt/tinyos-2.1.1/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t BlinkRavenC__Eui64__getId(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkRavenC__Timer2__startPeriodic(uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
static error_t BlinkRavenC__Raven__msg(
#line 67
const char *msg);
#line 81
static error_t BlinkRavenC__Raven__hex(
#line 76
const uint16_t n, 
const uint8_t mask);
#line 62
static error_t BlinkRavenC__Raven__cmd(
#line 58
uint8_t cmd);
# 54 "BlinkRavenC.nc"
enum BlinkRavenC____nesc_unnamed4332 {
#line 54
  BlinkRavenC__waitforeui = 0U
};
#line 54
typedef int BlinkRavenC____nesc_sillytask_waitforeui[BlinkRavenC__waitforeui];
#line 54
static inline void BlinkRavenC__waitforeui__runTask(void );








static inline void BlinkRavenC__Boot__booted(void );
#line 76
static inline void BlinkRavenC__Timer0__fired(void );





static inline void BlinkRavenC__Timer1__fired(void );





static inline void BlinkRavenC__Timer2__fired(void );




static inline void BlinkRavenC__Raven__battery(uint16_t voltage);


static inline void BlinkRavenC__Raven__temperature(int16_t celsius);
# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 73
static inline void LedsP__Leds__led0Toggle(void );
#line 88
static inline void LedsP__Leds__led1Toggle(void );
#line 103
static inline void LedsP__Leds__led2Toggle(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t RavenP__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
#line 65
static error_t RavenP__UartStream__enableReceiveInterrupt(void );






static error_t RavenP__UartStream__disableReceiveInterrupt(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t RavenP__received__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t RavenP__UartCtl__start(void );
# 95 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
static void RavenP__Raven__temperature(
#line 93
int16_t celsius);
#line 88
static void RavenP__Raven__battery(
#line 86
uint16_t voltage);
# 128 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
enum RavenP____nesc_unnamed4333 {
#line 128
  RavenP__received = 1U
};
#line 128
typedef int RavenP____nesc_sillytask_received[RavenP__received];
#line 51
uint8_t RavenP__txbuf[256 * 2];
uint8_t *RavenP__txt = RavenP__txbuf;
uint8_t *RavenP__txnextt = RavenP__txbuf;
uint8_t *RavenP__txh = RavenP__txbuf;

uint8_t RavenP__rxbuf[256 * 2];
uint8_t *RavenP__rxt = RavenP__rxbuf;
uint8_t *RavenP__rxlasth = RavenP__rxbuf;
uint8_t *RavenP__rxh = RavenP__rxbuf;
uint8_t RavenP__rxcnt = 0;

static uint16_t RavenP__getlength(const uint8_t *msg, uint16_t len);
#line 77
static uint16_t RavenP__diff(uint8_t *b, uint8_t *e);






static void RavenP__push_raw(uint8_t data);





static void RavenP__push(uint8_t data);
#line 102
static uint8_t RavenP__pop_raw(void );









static uint8_t RavenP__pop(void );








static void RavenP__trystart(void );






static inline void RavenP__received__runTask(void );
#line 148
static inline error_t RavenP__SoftwareInit__init(void );




static inline void RavenP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);










static inline void RavenP__UartStream__receivedByte(uint8_t byte);
#line 196
static inline void RavenP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);


static error_t RavenP__Raven__cmd(uint8_t cmd);
#line 216
static inline error_t RavenP__Raven__msg(const char *msg);
#line 240
static inline error_t RavenP__Raven__hex(const uint16_t n, const uint8_t mask);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );
# 62 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 99
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__enableReceiveInterrupt(void );







static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__disableReceiveInterrupt(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 131 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 151
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );
#line 163
static inline error_t HplAtm128UartP__Uart0RxControl__start(void );
#line 175
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 208
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_20(void ) __attribute((signal))   ;





void __vector_22(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 309
void __vector_28(void ) __attribute((signal))   ;




void __vector_30(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 89 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 81
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__fired(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__overflow(void );
# 68 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__start(void );
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get(void );
# 75 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__t0;
#line 76
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0____nesc_unnamed4334 {
  Atm1284AlarmAsyncP__0__MINDT = 2, 
  Atm1284AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Init__init(void );
#line 114
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 130
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt(void );
#line 189
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__fired(void );
#line 201
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__get(void );
#line 244
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1284Timer2AsyncP__Compare__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1284Timer2AsyncP__Timer__overflow(void );
# 101 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline uint8_t HplAtm1284Timer2AsyncP__Timer__get(void );
#line 133
static inline void HplAtm1284Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1284Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 156
static inline uint8_t HplAtm1284Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 183
static inline void HplAtm1284Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1284Timer2AsyncP__Compare__get(void );


static inline void HplAtm1284Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1284Timer2AsyncP__stabiliseTimer2(void );
#line 221
static inline mcu_power_t HplAtm1284Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 244
void __vector_9(void ) __attribute((signal))   ;







void __vector_11(void ) __attribute((signal))   ;
#line 268
static inline void HplAtm1284Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 280
static inline int HplAtm1284Timer2AsyncP__TimerAsync__compareABusy(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4335 {
#line 63
  AlarmToTimerC__0__fired = 2U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b0e9ce7dda0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4336 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 3U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4337 {

  VirtualizeTimerC__0__NUM_TIMERS = 3, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4338 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t RavenIeeeEui64P__Resource__release(void );
#line 78
static error_t RavenIeeeEui64P__Resource__request(void );
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t RavenIeeeEui64P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t RavenIeeeEui64P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 51 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
ieee_eui64_t RavenIeeeEui64P__eui;
#line 51
ieee_eui64_t RavenIeeeEui64P__eui_tmp;



static inline ieee_eui64_t RavenIeeeEui64P__LocalIeeeEui64__getId(void );



static inline error_t RavenIeeeEui64P__SoftwareInit__init(void );




static inline void RavenIeeeEui64P__Boot__booted(void );



static inline void RavenIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);





static inline void RavenIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);



static inline void RavenIeeeEui64P__Resource__granted(void );
# 39 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4339 {
#line 39
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5e020);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5c340);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf5c340);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 60
static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x2b0e9cf60d40);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4340 {
#line 75
  ArbiterP__0__grantedTask = 4U
};
#line 75
typedef int /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4341 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4343 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 108
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 130
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 187
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 201
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 213
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop(void );
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfb19c8);
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfaee28, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfcc020);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x2b0e9cfcc020);





enum /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0____nesc_unnamed4344 {
  Atm128I2CMasterImplP__0__NO_CLIENT = 0xff
};

uint8_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__NO_CLIENT;

static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(uint8_t id);
#line 67
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(uint8_t id);




static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(uint8_t id);








static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);








static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);


static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data);



static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(uint8_t id);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data);
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent(void );
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand(void );




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(bool on);
#line 45
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status(void );
#line 60
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(bool enable);
#line 82
static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read(void );
#line 42
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(bool hasExternalPulldown);
#line 57
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(bool enable);
#line 76
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(bool on);




static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(uint8_t data);
#line 43
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off(void );
#line 55
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(bool on);
#line 74
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(bool on);
# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On(void );
#line 78
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 86 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
enum /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0____nesc_unnamed4345 {
  Atm128I2CMasterPacketP__0__I2C_OFF = 0, 
  Atm128I2CMasterPacketP__0__I2C_IDLE = 1, 
  Atm128I2CMasterPacketP__0__I2C_BUSY = 2, 
  Atm128I2CMasterPacketP__0__I2C_ADDR = 3, 
  Atm128I2CMasterPacketP__0__I2C_DATA = 4, 
  Atm128I2CMasterPacketP__0__I2C_STARTING = 5, 
  Atm128I2CMasterPacketP__0__I2C_STOPPING = 6, 
  Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK = 7
};

uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF;
i2c_flags_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags;
uint8_t */*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen;
uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index;
uint16_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr;
bool /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading = FALSE;

static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(error_t err);
#line 125
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void );
#line 142
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void );
#line 160
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 211
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data);
#line 286
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void );
#line 382
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
static void HplAtm128I2CBusP__I2C__commandComplete(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void HplAtm128I2CBusP__I2CClk__makeInput(void );
#line 29
static void HplAtm128I2CBusP__I2CClk__set(void );
static void HplAtm128I2CBusP__I2CClk__clr(void );


static void HplAtm128I2CBusP__I2CData__makeInput(void );
#line 29
static void HplAtm128I2CBusP__I2CData__set(void );
static void HplAtm128I2CBusP__I2CData__clr(void );
# 56 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
uint8_t HplAtm128I2CBusP__current;

static inline void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown);
#line 75
static inline void HplAtm128I2CBusP__I2C__off(void );




static inline uint8_t HplAtm128I2CBusP__I2C__status(void );



static inline void HplAtm128I2CBusP__I2C__sendCommand(void );



static void HplAtm128I2CBusP__I2C__readCurrent(void );




static inline void HplAtm128I2CBusP__I2C__setStart(bool on);
#line 105
static inline void HplAtm128I2CBusP__I2C__setStop(bool on);
#line 118
static inline void HplAtm128I2CBusP__I2C__write(uint8_t data);



static inline uint8_t HplAtm128I2CBusP__I2C__read(void );



static inline void HplAtm128I2CBusP__I2C__enableAck(bool enable);
#line 139
static inline void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable);
#line 160
static inline void HplAtm128I2CBusP__I2C__setInterruptPending(bool on);








static inline void HplAtm128I2CBusP__I2C__enable(bool enable);
#line 187
void __vector_26(void ) __attribute((signal))   ;
# 46 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led1On(void );



static inline void NoLedsC__Leds__led2On(void );
# 95 "/opt/tinyos-2.1.1/tos/chips/atm1284/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 95
{
   __asm volatile ("cli");}

#line 112
#line 111
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 115
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 121
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 46
  SchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 58 "/opt/tinyos-2.1.1/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 55 "/opt/tinyos-2.1.1/tos/platforms/raven/MotePlatformP.nc"
static inline error_t MotePlatformP__SubInit__default__init(void )
#line 55
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP__SubInit__default__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 51 "/opt/tinyos-2.1.1/tos/platforms/raven/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 51
{
  return MotePlatformP__SubInit__init();
}

# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 76 "/opt/tinyos-2.1.1/tos/platforms/raven/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 76
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 82
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 100
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 48 "/opt/tinyos-2.1.1/tos/platforms/raven/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 48
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 84 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__sendCommand(void )
#line 84
{
  /* atomic removed: atomic calls only */
#line 85
  * (volatile uint8_t *)0xBC = HplAtm128I2CBusP__current;
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand(void ){
#line 48
  HplAtm128I2CBusP__I2C__sendCommand();
#line 48
}
#line 48
# 105 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setStop(bool on)
#line 105
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 107
      HplAtm128I2CBusP__current |= 1 << 4;
    }
  else {
      /* atomic removed: atomic calls only */
#line 110
      HplAtm128I2CBusP__current &= ~(1 << 4);
    }
}

# 55 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(bool on){
#line 55
  HplAtm128I2CBusP__I2C__setStop(on);
#line 55
}
#line 55
# 126 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enableAck(bool enable)
#line 126
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 128
      HplAtm128I2CBusP__current |= 1 << 6;
    }
  else {
      /* atomic removed: atomic calls only */
#line 131
      HplAtm128I2CBusP__current &= ~(1 << 6);
    }
}

# 57 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(bool enable){
#line 57
  HplAtm128I2CBusP__I2C__enableAck(enable);
#line 57
}
#line 57
# 118 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__write(uint8_t data)
#line 118
{
  * (volatile uint8_t *)0xBB = data;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(uint8_t data){
#line 81
  HplAtm128I2CBusP__I2C__write(data);
#line 81
}
#line 81
# 93 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setStart(bool on)
#line 93
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 95
      HplAtm128I2CBusP__current |= 1 << 5;
    }
  else {
      /* atomic removed: atomic calls only */
#line 98
      HplAtm128I2CBusP__current &= ~(1 << 5);
    }
}

# 53 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(bool on){
#line 53
  HplAtm128I2CBusP__I2C__setStart(on);
#line 53
}
#line 53
# 139 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enableInterrupt(bool enable)
#line 139
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 141
      HplAtm128I2CBusP__current |= 1 << 0;
    }
  else {
      /* atomic removed: atomic calls only */
#line 144
      HplAtm128I2CBusP__current &= ~(1 << 0);
    }
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(bool enable){
#line 60
  HplAtm128I2CBusP__I2C__enableInterrupt(enable);
#line 60
}
#line 60
# 160 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__setInterruptPending(bool on)
#line 160
{
  if (on) {
      /* atomic removed: atomic calls only */
#line 162
      HplAtm128I2CBusP__current |= 1 << 7;
    }
  else {
      /* atomic removed: atomic calls only */
#line 165
      HplAtm128I2CBusP__current &= ~(1 << 7);
    }
}

# 74 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(bool on){
#line 74
  HplAtm128I2CBusP__I2C__setInterruptPending(on);
#line 74
}
#line 74
#line 47
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent(void ){
#line 47
  HplAtm128I2CBusP__I2C__readCurrent();
#line 47
}
#line 47
# 211 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 211
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_BUSY;
        }
      else {
#line 216
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF) {
            {
              unsigned char __nesc_temp = 
#line 217
              EOFF;

              {
#line 217
                __nesc_atomic_end(__nesc_atomic); 
#line 217
                return __nesc_temp;
              }
            }
          }
        else 
#line 219
          {
            {
              unsigned char __nesc_temp = 
#line 220
              EBUSY;

              {
#line 220
                __nesc_atomic_end(__nesc_atomic); 
#line 220
                return __nesc_temp;
              }
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr = addr;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr = data;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen = len;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags = flags;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index = 0;
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading = FALSE;
    }
#line 232
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 234
    {
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(TRUE);

      if (flags & I2C_START) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(TRUE);

          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STARTING;
        }
      else {
#line 244
        if (len > 0) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(data[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index]);
          }
        else {
#line 248
          if (flags & I2C_STOP) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STOPPING;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
            }
          else {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
              {
                unsigned char __nesc_temp = 
#line 255
                FAIL;

                {
#line 255
                  __nesc_atomic_end(__nesc_atomic); 
#line 255
                  return __nesc_temp;
                }
              }
            }
          }
        }
#line 257
      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    }
#line 258
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__write(flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 81
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 82
    {
      if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient != id) {
          {
            unsigned char __nesc_temp = 
#line 84
            FAIL;

            {
#line 84
              __nesc_atomic_end(__nesc_atomic); 
#line 84
              return __nesc_temp;
            }
          }
        }
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }
#line 87
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__write(flags, addr, len, data);
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t RavenIeeeEui64P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(/*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID, flags, addr, length, data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 78 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline void RavenIeeeEui64P__Resource__granted(void )
#line 78
{
  RavenIeeeEui64P__eui_tmp.data[0] = 4;
  RavenIeeeEui64P__I2CPacket__write(I2C_START, 0x50, sizeof(uint8_t ), (uint8_t *)RavenIeeeEui64P__eui_tmp.data);
}

# 106 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(uint8_t id)
#line 106
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(uint8_t arg_0x2b0e9cfb19c8){
#line 92
  switch (arg_0x2b0e9cfb19c8) {
#line 92
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 92
      RavenIeeeEui64P__Resource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(arg_0x2b0e9cfb19c8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 67 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(uint8_t id)
#line 67
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 68
    /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient = id;
#line 68
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(id);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b0e9cf60d40){
#line 92
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(arg_0x2b0e9cf60d40);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b0e9cf5c340){
#line 49
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b0e9cf5c340);
#line 49
}
#line 49
# 187 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 191
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 92 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 244 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__stop(void )
#line 244
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 245
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__set = FALSE;
#line 245
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 262 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getNow(void )
#line 262
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__get();
}

# 98 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned long __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned long __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 89 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 156 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline uint8_t HplAtm1284Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 156
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1284Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 73
{
  LedsP__Led0__toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void BlinkRavenC__Leds__led0Toggle(void ){
#line 56
  LedsP__Leds__led0Toggle();
#line 56
}
#line 56
# 62 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
inline static error_t BlinkRavenC__Raven__cmd(uint8_t cmd){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RavenP__Raven__cmd(cmd);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 76 "BlinkRavenC.nc"
static inline void BlinkRavenC__Timer0__fired(void )
{
  BlinkRavenC__Raven__cmd(SIPC_CMD_ID_LED_ON);
  BlinkRavenC__Leds__led0Toggle();
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 88
{
  LedsP__Led1__toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void BlinkRavenC__Leds__led1Toggle(void ){
#line 72
  LedsP__Leds__led1Toggle();
#line 72
}
#line 72
# 82 "BlinkRavenC.nc"
static inline void BlinkRavenC__Timer1__fired(void )
{
  BlinkRavenC__Raven__cmd(SIPC_CMD_ID_LED_OFF);
  BlinkRavenC__Leds__led1Toggle();
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )34U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__toggle();
#line 31
}
#line 31
# 103 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 103
{
  LedsP__Led2__toggle();
  ;
#line 105
  ;
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void BlinkRavenC__Leds__led2Toggle(void ){
#line 89
  LedsP__Leds__led2Toggle();
#line 89
}
#line 89
# 88 "BlinkRavenC.nc"
static inline void BlinkRavenC__Timer2__fired(void )
{
  BlinkRavenC__Leds__led2Toggle();
}

# 193 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b0e9ce7dda0){
#line 72
  switch (arg_0x2b0e9ce7dda0) {
#line 72
    case 0U:
#line 72
      BlinkRavenC__Timer0__fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      BlinkRavenC__Timer1__fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      BlinkRavenC__Timer2__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b0e9ce7dda0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 175 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 175
{
  * (volatile uint8_t *)0xC0 |= 1 << 6;
  * (volatile uint8_t *)0xC1 |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 186 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 186
{
  * (volatile uint8_t *)0xC1 |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__enableReceiveInterrupt(void )
#line 99
{
  /* atomic removed: atomic calls only */
#line 100
  {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 3;
    /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  }
  return SUCCESS;
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t RavenP__UartStream__enableReceiveInterrupt(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__enableReceiveInterrupt();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 196 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline void HplAtm1284Timer2AsyncP__Compare__set(uint8_t t)
#line 196
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm1284Timer2AsyncP__Compare__set(t);
#line 45
}
#line 45
# 101 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline uint8_t HplAtm1284Timer2AsyncP__Timer__get(void )
#line 101
{
#line 101
  return * (volatile uint8_t *)0xB2;
}

# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm1284Timer2AsyncP__Timer__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 280 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline int HplAtm1284Timer2AsyncP__TimerAsync__compareABusy(void )
#line 280
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1284Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 114 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 114
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base - 1;
    }
#line 124
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__set(n);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 128 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 266 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getAlarm(void )
#line 266
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      unsigned long __nesc_temp = 
#line 267
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__dt;

      {
#line 267
        __nesc_atomic_end(__nesc_atomic); 
#line 267
        return __nesc_temp;
      }
    }
#line 269
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.1.1/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned long __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.1.1/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 93 "BlinkRavenC.nc"
static inline void BlinkRavenC__Raven__battery(uint16_t voltage)
#line 93
{
}

# 88 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
inline static void RavenP__Raven__battery(uint16_t voltage){
#line 88
  BlinkRavenC__Raven__battery(voltage);
#line 88
}
#line 88
# 96 "BlinkRavenC.nc"
static inline void BlinkRavenC__Raven__temperature(int16_t celsius)
#line 96
{
}

# 95 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
inline static void RavenP__Raven__temperature(int16_t celsius){
#line 95
  BlinkRavenC__Raven__temperature(celsius);
#line 95
}
#line 95
# 128 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline void RavenP__received__runTask(void )
#line 128
{
  uint16_t value;

#line 130
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (RavenP__pop_raw() != SIPC_SOF) {
        }

      switch (RavenP__pop()) {
          case SIPC_ANSWER_ID_TEMPERATURE: value = RavenP__pop() + 256 * RavenP__pop();
          RavenP__Raven__temperature((int16_t )value);
          break;
          case SIPC_ANSWER_ID_BATTERY: value = RavenP__pop() + 256 * RavenP__pop();
          RavenP__Raven__battery(value);
          break;
        }
      if (RavenP__pop_raw() != SIPC_EOF) {
        }
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t BlinkRavenC__waitforeui__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BlinkRavenC__waitforeui);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 240 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline error_t RavenP__Raven__hex(const uint16_t n, const uint8_t mask)
#line 240
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 242
    {
      if (RavenP__getlength((const uint8_t *)&n, 2) + 2 + 1 >= sizeof RavenP__txbuf - RavenP__diff(RavenP__txt, RavenP__txh)) 
        {
          unsigned char __nesc_temp = 
#line 244
          FAIL;

          {
#line 244
            __nesc_atomic_end(__nesc_atomic); 
#line 244
            return __nesc_temp;
          }
        }
#line 246
      RavenP__push_raw(SIPC_SOF);
      RavenP__push(SIPC_CMD_ID_HEX);
      RavenP__push(n & 0xff);
      RavenP__push((n >> 8) & 0xff);
      RavenP__push_raw(SIPC_EOF);
      RavenP__trystart();
      {
        unsigned char __nesc_temp = 
#line 252
        SUCCESS;

        {
#line 252
          __nesc_atomic_end(__nesc_atomic); 
#line 252
          return __nesc_temp;
        }
      }
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
}

# 81 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
inline static error_t BlinkRavenC__Raven__hex(const uint16_t n, const uint8_t mask){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = RavenP__Raven__hex(n, mask);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 55 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline ieee_eui64_t RavenIeeeEui64P__LocalIeeeEui64__getId(void )
#line 55
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    {
      struct ieee_eui64 __nesc_temp = 
#line 56
      RavenIeeeEui64P__eui;

      {
#line 56
        __nesc_atomic_end(__nesc_atomic); 
#line 56
        return __nesc_temp;
      }
    }
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 37 "/opt/tinyos-2.1.1/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t BlinkRavenC__Eui64__getId(void ){
#line 37
  struct ieee_eui64 __nesc_result;
#line 37

#line 37
  __nesc_result = RavenIeeeEui64P__LocalIeeeEui64__getId();
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 54 "BlinkRavenC.nc"
static inline void BlinkRavenC__waitforeui__runTask(void )
#line 54
{
  ieee_eui64_t eui;

#line 56
  eui = BlinkRavenC__Eui64__getId();

  if ((((((eui.data[0] | eui.data[1]) | eui.data[2]) | eui.data[3]) | eui.data[4]) | eui.data[5]) | eui.data[6]) {
    BlinkRavenC__Raven__hex(eui.data[7] + (eui.data[6] << 8), SIPC_HEXALL);
    }
  else {
#line 60
    BlinkRavenC__waitforeui__postTask();
    }
}

# 156 "/opt/tinyos-2.1.1/tos/chips/atm1284/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 156
{
}

# 44 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 44
  McuSleepC__McuPowerState__update();
#line 44
}
#line 44
# 163 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 163
{
  * (volatile uint8_t *)0xC1 |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 151 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 151
{
  * (volatile uint8_t *)0xC1 |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 191 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 191
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 181 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 181
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t RavenP__UartCtl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 148 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline error_t RavenP__SoftwareInit__init(void )
#line 148
{
  RavenP__UartCtl__start();
  return SUCCESS;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 155 "/opt/tinyos-2.1.1/tos/platforms/raven/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 155
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 225 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 225
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xCC = ubrr1;
  * (volatile uint8_t *)0xCD = ubrr1 >> 8;
  * (volatile uint8_t *)0xC8 = stts.flat;
  * (volatile uint8_t *)0xCA = mode.flat;
  * (volatile uint8_t *)0xC9 = ctrl.flat;

  return SUCCESS;
}

#line 131
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 131
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0xC4 = ubrr0;
  * (volatile uint8_t *)0xC5 = ubrr0 >> 8;
  * (volatile uint8_t *)0xC0 = stts.flat;
  * (volatile uint8_t *)0xC2 = mode.flat;
  * (volatile uint8_t *)0xC1 = ctrl.flat;

  return SUCCESS;
}

# 183 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline void HplAtm1284Timer2AsyncP__Compare__start(void )
#line 183
{
#line 183
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm1284Timer2AsyncP__Compare__start();
#line 56
}
#line 56
# 139 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline void HplAtm1284Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 139
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 82 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1284Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline void HplAtm1284Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 133
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1284Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 268 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline void HplAtm1284Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 268
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1284Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 91 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Init__init(void )
#line 91
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline error_t RavenIeeeEui64P__SoftwareInit__init(void )
#line 59
{
  memset(RavenIeeeEui64P__eui.data, 0, sizeof  RavenIeeeEui64P__eui.data);
  return SUCCESS;
}

# 45 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 45
{
  memset(/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, RavenIeeeEui64P__SoftwareInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, RavenP__SoftwareInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 216 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline error_t RavenP__Raven__msg(const char *msg)
#line 216
{
  uint16_t len = RavenP__getlength((const uint8_t *)msg, strlen(msg) + 1) + 2 + 1 + 4;
  char *ptr = (char *)msg;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 220
    {
      if (len >= sizeof RavenP__txbuf - RavenP__diff(RavenP__txt, RavenP__txh) || len > 256) 
        {
          unsigned char __nesc_temp = 
#line 222
          FAIL;

          {
#line 222
            __nesc_atomic_end(__nesc_atomic); 
#line 222
            return __nesc_temp;
          }
        }
#line 224
      RavenP__push_raw(SIPC_SOF);
      RavenP__push(SIPC_CMD_ID_MSG);
      while (*ptr) 
        RavenP__push(* ptr++);
      RavenP__push(*ptr);
      RavenP__push_raw(SIPC_EOF);

      RavenP__push_raw(0);
      RavenP__push_raw(0);
      RavenP__push_raw(0);
      RavenP__push_raw(0);
      RavenP__trystart();
      {
        unsigned char __nesc_temp = 
#line 236
        SUCCESS;

        {
#line 236
          __nesc_atomic_end(__nesc_atomic); 
#line 236
          return __nesc_temp;
        }
      }
    }
#line 239
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/platforms/raven/Raven.nc"
inline static error_t BlinkRavenC__Raven__msg(const char *msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = RavenP__Raven__msg(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void BlinkRavenC__Timer2__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 53
}
#line 53
inline static void BlinkRavenC__Timer1__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 53
}
#line 53
inline static void BlinkRavenC__Timer0__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 53
}
#line 53
# 63 "BlinkRavenC.nc"
static inline void BlinkRavenC__Boot__booted(void )
{
  BlinkRavenC__Timer0__startPeriodic(250);
  BlinkRavenC__Timer1__startPeriodic(500);
  BlinkRavenC__Timer2__startPeriodic(1000);

  BlinkRavenC__Raven__msg("Hello World");
  BlinkRavenC__Raven__cmd(SIPC_CMD_ID_LCD_SYMB_RAVEN_ON);
  BlinkRavenC__Raven__cmd(SIPC_CMD_ID_LED_ON);

  BlinkRavenC__waitforeui__postTask();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 130 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 135
                SUCCESS;

                {
#line 135
                  __nesc_atomic_end(__nesc_atomic); 
#line 135
                  return __nesc_temp;
                }
              }
            }
          else {
#line 137
            if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 140
                  SUCCESS;

                  {
#line 140
                    __nesc_atomic_end(__nesc_atomic); 
#line 140
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 144
  return FAIL;
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 169 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__enable(bool enable)
#line 169
{
  if (enable) {
      /* atomic removed: atomic calls only */
#line 171
      HplAtm128I2CBusP__current |= 1 << 2;
    }
  else {
      /* atomic removed: atomic calls only */
#line 174
      HplAtm128I2CBusP__current &= ~(1 << 2);
    }
}

# 76 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(bool on){
#line 76
  HplAtm128I2CBusP__I2C__enable(on);
#line 76
}
#line 76
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )39U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput();
#line 33
}
#line 33
# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )39U &= ~(1 << 0);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput();
#line 33
}
#line 33
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 1;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )40U |= 1 << 0;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set();
#line 29
}
#line 29
# 58 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__init(bool hasExternalPulldown)
#line 58
{

  if (hasExternalPulldown) {


      HplAtm128I2CBusP__I2CClk__set();
      HplAtm128I2CBusP__I2CData__set();
    }
  HplAtm128I2CBusP__I2CClk__makeInput();
  HplAtm128I2CBusP__I2CData__makeInput();
  * (volatile uint8_t *)0xB9 = 0;
  * (volatile uint8_t *)0xB8 = (7372800 / 50000UL - 16) / 2;

  * (volatile uint8_t *)0xBA = 0;
  * (volatile uint8_t *)0xBC = 0;
}

# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(bool hasExternalPulldown){
#line 42
  HplAtm128I2CBusP__I2C__init(hasExternalPulldown);
#line 42
}
#line 42
# 125 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start(void )
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__init(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
          {
            unsigned char __nesc_temp = 
#line 134
            SUCCESS;

            {
#line 134
              __nesc_atomic_end(__nesc_atomic); 
#line 134
              return __nesc_temp;
            }
          }
        }
      else 
#line 136
        {
          {
            unsigned char __nesc_temp = 
#line 137
            FAIL;

            {
#line 137
              __nesc_atomic_end(__nesc_atomic); 
#line 137
              return __nesc_temp;
            }
          }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 59
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 54 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 54
{
  /* atomic removed: atomic calls only */
#line 55
  {
    unsigned char __nesc_temp = 
#line 55
    /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 55
    return __nesc_temp;
  }
}

#line 72
static inline error_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 78
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 79
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 201 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 201
{
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b0e9cf5e020){
#line 43
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2b0e9cf5e020);
#line 43
}
#line 43
# 77 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(uint8_t arg_0x2b0e9cfcc020){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(arg_0x2b0e9cfcc020);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(uint8_t id)
#line 55
{
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(id);
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t RavenIeeeEui64P__Resource__request(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(/*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 64 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline void RavenIeeeEui64P__Boot__booted(void )
#line 64
{
  RavenIeeeEui64P__Resource__request();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  RavenIeeeEui64P__Boot__booted();
#line 49
  BlinkRavenC__Boot__booted();
#line 49
}
#line 49
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 133 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 221 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1284Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 221
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 236
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.1.1/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HplAtm1284Timer2AsyncP__McuPowerOverride__lowestState();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 102 "/opt/tinyos-2.1.1/tos/chips/atm1284/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 102
{










  if ((
#line 112
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & (((1 << 5) | (1 << 1)) | (1 << 2))) || 
  * (volatile uint8_t *)0x71 & (((1 << 5) | (1 << 1)) | (1 << 2))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0xC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 126
        if (* (volatile uint8_t *)0xC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 143 "/opt/tinyos-2.1.1/tos/chips/atm1284/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 143
{
  return m1 < m2 ? m1 : m2;
}

# 142 "/opt/tinyos-2.1.1/tos/chips/atm1284/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 142
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 147
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 147
    uint8_t __result;

#line 147
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 148
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 59
  McuSleepC__McuSleep__sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 72
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 61
  SchedulerBasicP__Scheduler__taskLoop();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t RavenP__received__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RavenP__received);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 72 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t RavenP__UartStream__disableReceiveInterrupt(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__disableReceiveInterrupt();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 164 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline void RavenP__UartStream__receivedByte(uint8_t byte)
#line 164
{
  /* atomic removed: atomic calls only */
#line 165
  {
    if (!RavenP__rxh) {
        if (byte == SIPC_EOF) {
            RavenP__rxh = RavenP__rxlasth;
            if (! --RavenP__rxcnt) {
              RavenP__UartStream__disableReceiveInterrupt();
              }
          }
        return;
      }
    if (RavenP__rxh + 1 == RavenP__rxt || (RavenP__rxh + 1 >= RavenP__rxbuf + sizeof RavenP__rxbuf && RavenP__rxt == RavenP__rxbuf)) {
        RavenP__rxh = 0;

        return;
      }
    if (byte == SIPC_SOF && RavenP__rxh != RavenP__rxlasth) {
        RavenP__rxh = RavenP__rxlasth;
      }

    * RavenP__rxh++ = byte;
    if (RavenP__rxh >= RavenP__rxbuf + sizeof RavenP__rxbuf) {
      RavenP__rxh = RavenP__rxbuf;
      }
#line 187
    if (byte == SIPC_EOF) {
        RavenP__rxlasth = RavenP__rxh;
        if (! --RavenP__rxcnt) {
          RavenP__UartStream__disableReceiveInterrupt();
          }
#line 191
        RavenP__received__postTask();
      }
  }
}

# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  RavenP__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 196 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline void RavenP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 196
{
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  RavenP__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t RavenP__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 153 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static inline void RavenP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 153
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      RavenP__txt = RavenP__txnextt;
      if (RavenP__txt != RavenP__txh) {
          RavenP__txnextt = RavenP__txh < RavenP__txt ? RavenP__txbuf : RavenP__txh;
          RavenP__UartStream__send(RavenP__txt, RavenP__diff(RavenP__txt, RavenP__txnextt));
        }
    }
#line 161
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  RavenP__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 321 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 321
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 320 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 320
{
}

# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 206 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static __inline void HplAtm1284Timer2AsyncP__stabiliseTimer2(void )
#line 206
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
}
#line 71
# 91 "/opt/tinyos-2.1.1/tos/chips/atm1284/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 91
{
   __asm volatile ("sei");}

# 193 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
static inline uint8_t HplAtm1284Timer2AsyncP__Compare__get(void )
#line 193
{
#line 193
  return * (volatile uint8_t *)0xB3;
}

# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm1284Timer2AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 189 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__fired(void )
#line 189
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1284Timer2AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 270 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__overflow(void )
#line 270
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1284Timer2AsyncP__Timer__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__read(flags, addr, length, data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 90 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__read(uint8_t id, i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 90
{
  /* atomic removed: atomic calls only */
#line 91
  {
    if (/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient != id) {
        {
          unsigned char __nesc_temp = 
#line 93
          FAIL;

#line 93
          return __nesc_temp;
        }
      }
  }
#line 96
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__read(flags, addr, len, data);
}

# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static error_t RavenIeeeEui64P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__read(/*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID, flags, addr, length, data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 74 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline void RavenIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 74
{
  RavenIeeeEui64P__I2CPacket__read(I2C_START | I2C_STOP, 0x50, sizeof  RavenIeeeEui64P__eui_tmp.data, RavenIeeeEui64P__eui_tmp.data);
}

# 107 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 107
{
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(uint8_t arg_0x2b0e9cfaee28, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  switch (arg_0x2b0e9cfaee28) {
#line 101
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 101
      RavenIeeeEui64P__I2CPacket__writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    default:
#line 101
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(arg_0x2b0e9cfaee28, error, addr, length, data);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 102 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 102
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient, error, addr, len, data);
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__writeDone(error, addr, length, data);
#line 101
}
#line 101
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(uint8_t arg_0x2b0e9cfcc020){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(arg_0x2b0e9cfcc020);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop(void ){
#line 46
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop();
#line 46
}
#line 46
# 72 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(uint8_t id)
#line 72
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Atm128I2C__stop();
  return /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(id);
}

# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static error_t RavenIeeeEui64P__Resource__release(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__release(/*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 68 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenIeeeEui64P.nc"
static inline void RavenIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 68
{
  if (error == SUCCESS) {
    /* atomic removed: atomic calls only */
#line 70
    memcpy(RavenIeeeEui64P__eui.data, RavenIeeeEui64P__eui_tmp.data, sizeof  RavenIeeeEui64P__eui.data);
    }
#line 71
  RavenIeeeEui64P__Resource__release();
}

# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 108
{
}

# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(uint8_t arg_0x2b0e9cfaee28, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  switch (arg_0x2b0e9cfaee28) {
#line 91
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 91
      RavenIeeeEui64P__I2CPacket__readDone(error, addr, length, data);
#line 91
      break;
#line 91
    default:
#line 91
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(arg_0x2b0e9cfaee28, error, addr, length, data);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 99 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 99
{
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(/*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__currentClient, error, addr, len, data);
}

# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__readDone(error, addr, length, data);
#line 91
}
#line 91
# 105 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(error_t err)
#line 105
{
  /* atomic removed: atomic calls only */
#line 106
  {

    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
      }
    else {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(err, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
      }
  }
}

# 80 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP__I2C__status(void )
#line 80
{
  return * (volatile uint8_t *)0xB9 & 0xf8;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAtm128I2CBusP__I2C__status();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 50 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2On(void )
#line 50
{
}

# 78 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On(void ){
#line 78
  NoLedsC__Leds__led2On();
#line 78
}
#line 78
# 46 "/opt/tinyos-2.1.1/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led1On(void )
#line 46
{
}

# 61 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On(void ){
#line 61
  NoLedsC__Leds__led1On();
#line 61
}
#line 61
# 122 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline uint8_t HplAtm128I2CBusP__I2C__read(void )
#line 122
{
  return * (volatile uint8_t *)0xBB;
}

# 82 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static uint8_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read(void ){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = HplAtm128I2CBusP__I2C__read();
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 286 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete(void )
#line 286
{
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
  /* atomic removed: atomic calls only */
#line 288
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
          }
      }
    else {
#line 296
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA) {

          if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen) {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index] = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__read();
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen - 1 && 
                  !(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_ACK_END)) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);
                    }
                }
              else 
                {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_STOP) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_STOP;
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status();
                    }
                  else {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
                    }

                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__readDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
                  return;
                }
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index++;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
              return;
            }
          else {
              if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index < /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen) {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr[/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index]);
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index++;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                }
              else {
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
                  if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags & I2C_STOP) {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_STOP;
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led1On();
                    }
                  else {
                      /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
                    }
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE;
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__WriteDebugLeds__led2On();
                  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__writeDone(SUCCESS, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen, /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr);
                  return;
                }
            }
        }
      else {
#line 351
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STARTING) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags &= ~I2C_START;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(FALSE);
            if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status() != ATM128_I2C_START && 
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__status() != ATM128_I2C_RSTART) {
                if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading) {
                  }


                /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__i2c_abort(FAIL);
                return;
              }
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_ADDR;
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
          }
        }
      }
#line 366
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_ADDR) {
        if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading == TRUE) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr & 0x7f) << 1) | 0x01);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_SLAVE_ACK;
          }
        else 
          {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__write(((/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr & 0x7f) << 1) | 0x00);
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
          }

        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
      }
  }
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void HplAtm128I2CBusP__I2C__commandComplete(void ){
#line 49
  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__commandComplete();
#line 49
}
#line 49
# 50 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 50
{
  /* atomic removed: atomic calls only */
#line 51
  {
    unsigned char __nesc_temp = 
#line 51
    /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 51
    return __nesc_temp;
  }
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 58 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 62
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 65
        /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.1.1/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 215 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 215
{
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b0e9cf5c340){
#line 55
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b0e9cf5c340);
#line 55
}
#line 55
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CData__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )40U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128I2CBusP__I2CClk__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr();
#line 30
}
#line 30
# 75 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static inline void HplAtm128I2CBusP__I2C__off(void )
#line 75
{
  HplAtm128I2CBusP__I2CClk__clr();
  HplAtm128I2CBusP__I2CData__clr();
}

# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/HplAtm128I2CBus.nc"
inline static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off(void ){
#line 43
  HplAtm128I2CBusP__I2C__off();
#line 43
}
#line 43
# 142 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static inline error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop(void )
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enable(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(FALSE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__off();
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF;
        {
          unsigned char __nesc_temp = 
#line 152
          SUCCESS;

#line 152
          return __nesc_temp;
        }
      }
    else 
#line 154
      {
        {
          unsigned char __nesc_temp = 
#line 155
          FAIL;

#line 155
          return __nesc_temp;
        }
      }
  }
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__AsyncStdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 74 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 74
{
}

# 52 "/opt/tinyos-2.1.1/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 52
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.1/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 69
{
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128I2CMasterP.Power*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 52 "/opt/tinyos-2.1.1/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 60
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 60
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 60
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b0e9ca0e108){
#line 64
  switch (arg_0x2b0e9ca0e108) {
#line 64
    case BlinkRavenC__waitforeui:
#line 64
      BlinkRavenC__waitforeui__runTask();
#line 64
      break;
#line 64
    case RavenP__received:
#line 64
      RavenP__received__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 64
      /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b0e9ca0e108);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 88 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
static void HplAtm128I2CBusP__I2C__readCurrent(void )
#line 88
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 89
    HplAtm128I2CBusP__current = * (volatile uint8_t *)0xBC;
#line 89
    __nesc_atomic_end(__nesc_atomic); }
}

# 201 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__get(void )
#line 201
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base + now8;
        }
    }
#line 219
    __nesc_atomic_end(__nesc_atomic); }
#line 219
  return now;
}

# 62 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 199 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static error_t RavenP__Raven__cmd(uint8_t cmd)
#line 199
{
  if (cmd >= SIPC_CMD_ID_LCD_MAX && cmd <= SIPC_CMD_WITH_ANSWER) {
    return FAIL;
    }
#line 202
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 202
    {
      if (RavenP__getlength(&cmd, 1) + 2 >= sizeof RavenP__txbuf - RavenP__diff(RavenP__txt, RavenP__txh)) 
        {
          unsigned char __nesc_temp = 
#line 204
          FAIL;

          {
#line 204
            __nesc_atomic_end(__nesc_atomic); 
#line 204
            return __nesc_temp;
          }
        }
#line 205
      RavenP__push_raw(SIPC_SOF);
      RavenP__push(cmd);
      RavenP__push_raw(SIPC_EOF);
      RavenP__trystart();
      if (cmd > SIPC_CMD_WITH_ANSWER && ! RavenP__rxcnt++) {
          RavenP__UartStream__enableReceiveInterrupt();
        }
      {
        unsigned char __nesc_temp = 
#line 212
        SUCCESS;

        {
#line 212
          __nesc_atomic_end(__nesc_atomic); 
#line 212
          return __nesc_temp;
        }
      }
    }
#line 215
    __nesc_atomic_end(__nesc_atomic); }
}

#line 62
static uint16_t RavenP__getlength(const uint8_t *msg, uint16_t len)
#line 62
{
  uint16_t real_len = 0;

#line 64
  while (len--) {
      switch (*msg) {
          case SIPC_SOF: ;
          case SIPC_EOF: ;
          case SIPC_ESC: ;
          real_len++;
          break;
        }
      real_len++;
    }
  return real_len;
}

static uint16_t RavenP__diff(uint8_t *b, uint8_t *e)
#line 77
{
  if (b <= e) {
    return e - b;
    }
  else {
#line 81
    return e - RavenP__txbuf + (RavenP__txbuf + sizeof RavenP__txbuf - b);
    }
}

#line 84
static void RavenP__push_raw(uint8_t data)
#line 84
{
  * RavenP__txh++ = data;
  if (RavenP__txh >= RavenP__txbuf + sizeof RavenP__txbuf) {
    RavenP__txh = RavenP__txbuf;
    }
}

#line 90
static void RavenP__push(uint8_t data)
#line 90
{
  switch (data) {
      case SIPC_SOF: ;
      case SIPC_EOF: ;
      case SIPC_ESC: ;
      RavenP__push_raw(SIPC_ESC);
      RavenP__push_raw(data | SIPC_ESC_MASK);
      break;
      default: RavenP__push_raw(data);
    }
}

#line 121
static void RavenP__trystart(void )
#line 121
{
  if (RavenP__txt == RavenP__txnextt) {
      RavenP__txnextt = RavenP__txh < RavenP__txt ? RavenP__txbuf : RavenP__txh;
      RavenP__UartStream__send(RavenP__txt, RavenP__diff(RavenP__txt, RavenP__txnextt));
    }
}

# 155 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 208 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 208
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 209
    {
      * (volatile uint8_t *)0xC6 = data;
      * (volatile uint8_t *)0xC0 |= 1 << 6;
    }
#line 212
    __nesc_atomic_end(__nesc_atomic); }
}

# 159 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 252 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/Atm1284AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 252
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__dt = ndt;
    }
#line 258
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt();
}

#line 130
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setInterrupt(void )
#line 130
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 141
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 149
            __nesc_atomic_end(__nesc_atomic); 
#line 149
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Counter__get();

#line 160
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MAXT;
                }
              else {
#line 176
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__MINDT;
                  }
                else {
#line 179
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 182
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Alarm__fired();
    }
}

# 102 "/opt/tinyos-2.1.1/tos/platforms/raven/RavenP.nc"
static uint8_t RavenP__pop_raw(void )
#line 102
{
  uint8_t data;

#line 104
  if (RavenP__rxt == RavenP__rxh) {
    return SIPC_EOF;
    }
#line 106
  data = * RavenP__rxt++;
  if (RavenP__rxt >= RavenP__rxbuf + sizeof RavenP__rxbuf) {
    RavenP__rxt = RavenP__rxbuf;
    }
#line 109
  return data;
}

static uint8_t RavenP__pop(void )
#line 112
{
  uint8_t data = RavenP__pop_raw();

#line 114
  if (data == SIPC_ESC) {
      data = RavenP__pop_raw();
      data &= ~SIPC_ESC_MASK;
    }
  return data;
}

# 143 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 215 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
__attribute((signal))   void __vector_20(void )
#line 215
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 107 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__disableReceiveInterrupt(void )
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  }
  return SUCCESS;
}

# 221 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_22(void )
#line 221
{
  HplAtm128UartP__HplUart0__txDone();
}

#line 309
__attribute((signal))   void __vector_28(void )
#line 309
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0xCE);
    }
}

#line 314
__attribute((interrupt))   void __vector_30(void )
#line 314
{
  HplAtm128UartP__HplUart1__txDone();
}

# 244 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer2AsyncP.nc"
__attribute((signal))   void __vector_9(void )
#line 244
{
  HplAtm1284Timer2AsyncP__stabiliseTimer2();


  HplAtm1284Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_11(void )
#line 252
{
  HplAtm1284Timer2AsyncP__stabiliseTimer2();

  HplAtm1284Timer2AsyncP__Timer__overflow();
}

# 187 "/opt/tinyos-2.1.1/tos/chips/atm1284/i2c/HplAtm128I2CBusP.nc"
__attribute((signal))   void __vector_26(void )
#line 187
{
  HplAtm128I2CBusP__I2C__commandComplete();
}

# 382 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static void /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__Atm128I2C__stop(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(FALSE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
  }
}

# 108 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 108
{
  /* atomic removed: atomic calls only */
#line 109
  {
    if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 124
          SUCCESS;

#line 124
          return __nesc_temp;
        }
      }
  }
#line 127
  return FAIL;
}

# 160 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterPacketP.nc"
static error_t /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t len, uint8_t *data)
#line 160
{
  /* atomic removed: atomic calls only */
#line 161
  {
    if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_IDLE) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_BUSY;
      }
    else {
#line 165
      if (/*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state == /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_OFF) {
          {
            unsigned char __nesc_temp = 
#line 166
            EOFF;

#line 166
            return __nesc_temp;
          }
        }
      else 
#line 168
        {
          {
            unsigned char __nesc_temp = 
#line 169
            EBUSY;

#line 169
            return __nesc_temp;
          }
        }
      }
  }
  /* atomic removed: atomic calls only */
#line 174
  {
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetAddr = addr;
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetPtr = data;
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetLen = len;
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__packetFlags = flags;
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__index = 0;
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__reading = TRUE;
  }


  /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__readCurrent();
  /* atomic removed: atomic calls only */
#line 185
  {
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableInterrupt(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setInterruptPending(TRUE);
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);

    if (flags & I2C_START) {
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStart(TRUE);
        /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STARTING;
      }
    else {
#line 194
      if (len > 1 || (len > 0 && flags & I2C_ACK_END)) {
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(TRUE);
          /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
        }
      else {
#line 198
        if (len == 1) {
            /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_DATA;
          }
        else {
#line 201
          if (flags & I2C_STOP) {
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__state = /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C_STOPPING;
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__enableAck(FALSE);
              /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__setStop(TRUE);
            }
          }
        }
      }
#line 206
    /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2C__sendCommand();
  }
  return SUCCESS;
}

