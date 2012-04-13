#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
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
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
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
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
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
# 117 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x7f8e038ab020, const void *arg_0x7f8e038ab2f8, size_t arg_0x7f8e038ab5a0);



extern void *memset(void *arg_0x7f8e038a5020, int arg_0x7f8e038a5288, size_t arg_0x7f8e038a5530);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
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


typedef int (*__compar_fn_t)(const void *arg_0x7f8e03885838, const void *arg_0x7f8e03885b10);
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
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
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
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
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
# 85 "/opt/tinyos-2.1.1/tos/platforms/inga/MicaTimer.h"
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
# 65 "/opt/tinyos-2.1.1/tos/platforms/inga/hardware.h"
enum __nesc_unnamed4307 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4308 {
  PLATFORM_BAUDRATE = 19200L
};
# 43 "/usr/lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 245 "/opt/tinyos-2.1.1/tos/lib/printf/avr_stdio.h"
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 264
  int size;
  int len;
  int (*put)(char arg_0x7f8e0360d9f8, struct __file *arg_0x7f8e0360dd38);
  int (*get)(struct __file *arg_0x7f8e0360b470);
  void *udata;
};
#line 408
extern struct __file *( __iob)[];
#line 420
struct __file;
#line 639
extern int printf(const char * __fmt, ...);
# 30 "/opt/tinyos-2.1.1/tos/chips/rf2xx/rf230/RF230DriverLayer.h"
#line 27
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 32
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF212_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_DEFAULT = 11, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 46 "/opt/tinyos-2.1.1/tos/platforms/inga/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4309 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 94
typedef TOne TRadio;
typedef uint16_t tradio_size;
# 34 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/TinyosNetworkLayer.h"
#line 31
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 34 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/Ieee154PacketLayer.h"
#line 27
typedef nx_struct ieee154_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_header_t;

enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 6 "/opt/tinyos-2.1.1/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4310 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4311 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 32 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/ActiveMessageLayer.h"
#line 29
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 31 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/MetadataFlagsLayer.h"
#line 27
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 30 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/TimeStampingLayer.h"
#line 27
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 30 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/LowPowerListeningLayer.h"
#line 27
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 31 "/opt/tinyos-2.1.1/tos/chips/rf2xx/layers/PacketLinkLayer.h"
#line 27
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 47 "/opt/tinyos-2.1.1/tos/chips/rf2xx/rf230/RF230Radio.h"
#line 37
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;
  ieee154_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rf230packet_header_t;




#line 49
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 65
#line 54
typedef struct rf230packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} rf230packet_metadata_t;
# 72 "/opt/tinyos-2.1.1/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4312 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4313 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4314 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 44 "/opt/tinyos-2.1.1/tos/platforms/inga/platform_message.h"
#line 41
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 50
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.1/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 59 "/opt/tinyos-2.1.1/tos/lib/printf/printf.h"
int printfflush();






#line 64
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4315 {
  AM_PRINTF_MSG = 100
};
# 32 "/opt/tinyos-2.1.1/tos/types/Leds.h"
enum __nesc_unnamed4316 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4317 {
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
typedef union __nesc_unnamed4318 {
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

enum __nesc_unnamed4319 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4320 {
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





enum __nesc_unnamed4321 {
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

enum __nesc_unnamed4322 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4323 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4324 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
# 78 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
# 42 "/opt/tinyos-2.1.1/tos/platforms/inga/UserButton.h"
typedef enum __nesc_unnamed4325 {
#line 42
  BUTTON_RELEASED = 0, BUTTON_PRESSED = 1
} 
#line 42
button_state_t;
# 131 "/opt/tinyos-2.1.1/tos/platforms/inga/inga.h"
#line 43
typedef enum __nesc_unnamed4326 {

  SIPC_CMD_ID_LCD_SYMB_INGA_ON = 0x00, 
  SIPC_CMD_ID_LCD_SYMB_INGA_OFF = 0x01, 

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
typedef enum __nesc_unnamed4327 {
  SIPC_ANSWER_ID_TEMPERATURE = 1, 
  SIPC_ANSWER_ID_BATTERY = 2
} SipcAnswerId_t;






#line 138
typedef enum __nesc_unnamed4328 {
  SIPC_SOF = 0x02, 
  SIPC_EOF = 0x03, 
  SIPC_ESC = 0x17, 
  SIPC_ESC_MASK = 0x40
} SipcCtl_t;









#line 145
typedef enum __nesc_unnamed4329 {
  SIPC_HEX1 = 0x01, 
  SIPC_HEX2 = 0x02, 
  SIPC_HEX3 = 0x04, 
  SIPC_HEX4 = 0x08, 
  SIPC_HEXNONE = 0x00, 
  SIPC_HEXAUTO = 0x10, 
  SIPC_HEXALL = ((SIPC_HEX1 | SIPC_HEX2) | SIPC_HEX3) | SIPC_HEX4
} SipcHexMask_t;
# 29 "/opt/tinyos-2.1.1/tos/types/IeeeEui64.h"
enum __nesc_unnamed4330 {
#line 29
  IEEE_EUI64_LENGTH = 8
};


#line 31
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 40 "/opt/tinyos-2.1.1/tos/types/I2C.h"
typedef struct __nesc_unnamed4331 {
} 
#line 40
TI2CExtdAddr;
typedef struct __nesc_unnamed4332 {
} 
#line 41
TI2CBasicAddr;

typedef uint8_t i2c_flags_t;

enum __nesc_unnamed4333 {
  I2C_START = 0x01, 
  I2C_STOP = 0x02, 
  I2C_ACK_END = 0x04
};
# 35 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2C.h"
enum __nesc_unnamed4334 {
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
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm1284Timer3P__CompareA__size_type;
typedef uint16_t HplAtm1284Timer3P__Capture__size_type;
typedef uint16_t HplAtm1284Timer3P__CompareB__size_type;
typedef uint16_t HplAtm1284Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
enum SerialAMQueueP____nesc_unnamed4335 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
typedef uint8_t /*PrintfC.QueueC*/QueueC__0__queue_t;
typedef /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__t;
typedef uint8_t PrintfP__Queue__t;
typedef TMilli BlinkIngaC__Timer0__precision_tag;
typedef TMilli BlinkIngaC__Timer1__precision_tag;
typedef button_state_t BlinkIngaC__UserButtonGet__val_t;
typedef button_state_t BlinkIngaC__UserButtonNotify__val_t;
enum HilTimerMilliC____nesc_unnamed4336 {
  HilTimerMilliC__TIMER_COUNT = 2U
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
typedef TI2CBasicAddr IngaIeeeEui64P__I2CPacket__addr_size;
enum /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0____nesc_unnamed4337 {
  Atm128I2CMasterC__0__CLIENT_ID = 0U
};
enum Atm128I2CMasterP____nesc_unnamed4338 {
  Atm128I2CMasterP__ATM128_I2C_CLIENT_COUNT = 1U
};
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__addr_size;
typedef TI2CBasicAddr /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0__I2CPacket__addr_size;
typedef bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t;
typedef bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__val_t;
typedef bool UserButtonP__GetLower__val_t;
typedef button_state_t UserButtonP__Notify__val_t;
typedef bool UserButtonP__NotifyLower__val_t;
typedef button_state_t UserButtonP__Get__val_t;
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__get(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set(void );
static void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );

static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f8e0375f4c8);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 45 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f8e0375f4c8);
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
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 36 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f8e03509508, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f8e03508780, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 64
static void SerialP__RunTx__runTask(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 38
static void SerialP__SerialFlush__default__flush(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 74
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 51
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bc238, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bc238, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bd6e8, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 68
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 54
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
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









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 74
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 83 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm1284Timer3P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1284Timer3P__TimerCtrl__getControlB(void );
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1284Timer3P__CompareA__default__fired(void );
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm1284Timer3P__Capture__size_type HplAtm1284Timer3P__Capture__get(void );
#line 51
static void HplAtm1284Timer3P__Capture__default__captured(HplAtm1284Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1284Timer3P__CompareB__default__fired(void );
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1284Timer3P__Timer__setScale(uint8_t scale);
#line 58
static void HplAtm1284Timer3P__Timer__set(HplAtm1284Timer3P__Timer__timer_size t);










static void HplAtm1284Timer3P__Timer__start(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
#line 61
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f8e0310b650, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f8e0310c430, 
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f8e0310c430, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 73 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static 
#line 71
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*PrintfC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*PrintfC.QueueC*/QueueC__0__Queue__t  

/*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void PrintfP__SerialControl__startDone(error_t error);
#line 117
static void PrintfP__SerialControl__stopDone(error_t error);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void PrintfP__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void PrintfP__retrySend__runTask(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void PrintfP__MainBoot__booted(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 72
static void LedsP__Leds__led1Toggle(void );
# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
#line 29
static void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkIngaC__Timer0__fired(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void BlinkIngaC__Boot__booted(void );
# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkIngaC__Timer1__fired(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static void BlinkIngaC__UserButtonNotify__notify(BlinkIngaC__UserButtonNotify__val_t val);
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t IngaP__SoftwareInit__init(void );
# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static void IngaP__UartStream__receivedByte(uint8_t byte);
#line 99
static void IngaP__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void IngaP__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
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
uint8_t arg_0x7f8e02e7fda0);
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f8e02e7fda0, 
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t IngaIeeeEui64P__SoftwareInit__init(void );
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void IngaIeeeEui64P__Boot__booted(void );
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void IngaIeeeEui64P__Resource__granted(void );
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void IngaIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void IngaIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, 
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
uint8_t arg_0x7f8e02da17e8);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02d9f9b8);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02d9f9b8);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02da2640);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02da2640);
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
uint8_t arg_0x7f8e02d469c8);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__request(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d469c8);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d469c8);
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__read(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 101
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 81
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__write(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 81 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d3c020);
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
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__enable(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 43
static error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
#line 42
static error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableRisingEdge(void );
# 64 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void );
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
static /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__val_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__get(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static error_t UserButtonP__Notify__enable(void );
#line 74
static void UserButtonP__NotifyLower__notify(UserButtonP__NotifyLower__val_t val);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
static UserButtonP__Get__val_t UserButtonP__Get__get(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 48 "/opt/tinyos-2.1.1/tos/platforms/inga/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 51 "/opt/tinyos-2.1.1/tos/platforms/inga/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit0*/HplAtm128GeneralIOPinP__16__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortC.Bit1*/HplAtm128GeneralIOPinP__17__IO__makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void );
# 68 "/opt/tinyos-2.1.1/tos/platforms/inga/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4339 {


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
uint8_t arg_0x7f8e0375f4c8);
# 59 "/opt/tinyos-2.1.1/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 50 "/opt/tinyos-2.1.1/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4340 {

  SchedulerBasicP__NUM_TASKS = 13U, 
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
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 36 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f8e03509508, 
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 37 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7f8e03508780, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 90
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 137
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 161
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 117
static void SerialP__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 68
static void SerialP__SerialFrameComm__resetReceive(void );
#line 54
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 189 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4341 {
#line 189
  SerialP__RunTx = 0U
};
#line 189
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 320
enum SerialP____nesc_unnamed4342 {
#line 320
  SerialP__startDoneTask = 1U
};
#line 320
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];





enum SerialP____nesc_unnamed4343 {
#line 326
  SerialP__stopDoneTask = 2U
};
#line 326
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4344 {
#line 335
  SerialP__defaultSerialFlushTask = 3U
};
#line 335
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 79
enum SerialP____nesc_unnamed4345 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4346 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4347 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP____nesc_unnamed4348 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4349 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP____nesc_unnamed4350 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 128
typedef struct SerialP____nesc_unnamed4351 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 133
typedef struct SerialP____nesc_unnamed4352 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 205
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 232
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );





static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );




static void SerialP__testOff(void );
#line 384
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 539
static inline void SerialP__RunTx__runTask(void );
#line 642
static inline void SerialP__SerialFrameComm__putDone(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bc238, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 39 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bd6e8, 
# 60 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570, 
# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570);
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7f8e033bb570, 
# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4353 {
#line 147
  SerialDispatcherP__0__signalSendDone = 4U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4354 {
#line 264
  SerialDispatcherP__0__receiveTask = 5U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4355 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4356 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4357 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 347
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 74
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 47 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC____nesc_unnamed4358 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );





static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 104
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
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









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
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







static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
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





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





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
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1284Timer3P__CompareA__fired(void );
# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1284Timer3P__Capture__captured(HplAtm1284Timer3P__Capture__size_type t);
# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1284Timer3P__CompareB__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1284Timer3P__Timer__overflow(void );
# 93 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__Timer__set(uint16_t t);








static inline void HplAtm1284Timer3P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1284Timer3P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1284Timer3P__TimerCtrl__setControlB(uint8_t x);
#line 163
static inline void HplAtm1284Timer3P__Timer__start(void );
#line 208
static inline uint16_t HplAtm1284Timer3P__Capture__get(void );





static inline void HplAtm1284Timer3P__CompareA__default__fired(void );
void __vector_32(void ) __attribute((interrupt))   ;


static inline void HplAtm1284Timer3P__CompareB__default__fired(void );
void __vector_33(void ) __attribute((interrupt))   ;


static inline void HplAtm1284Timer3P__Capture__default__captured(uint16_t time);
void __vector_31(void ) __attribute((interrupt))   ;



void __vector_34(void ) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 56 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4359 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f8e0310b650, 
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f8e0310c430, 
# 85 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4360 {
#line 118
  AMQueueImplP__0__CancelTask = 6U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4361 {
#line 161
  AMQueueImplP__0__errorTask = 7U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4362 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 48 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC__0__queue_t  /*PrintfC.QueueC*/QueueC__0__queue[250];
uint8_t /*PrintfC.QueueC*/QueueC__0__head = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC__0__size = 0;

static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
static void PrintfP__Boot__booted(void );
# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
static error_t PrintfP__SerialControl__start(void );
# 90 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
static error_t PrintfP__Queue__enqueue(
#line 86
PrintfP__Queue__t  newVal);
#line 81
static 
#line 79
PrintfP__Queue__t  

PrintfP__Queue__dequeue(void );
#line 50
static bool PrintfP__Queue__empty(void );







static uint8_t PrintfP__Queue__size(void );
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
static error_t PrintfP__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
static 
#line 112
void * 


PrintfP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t PrintfP__retrySend__postTask(void );
# 127 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
enum PrintfP____nesc_unnamed4363 {
#line 127
  PrintfP__retrySend = 8U
};
#line 127
typedef int PrintfP____nesc_sillytask_retrySend[PrintfP__retrySend];
#line 100
enum PrintfP____nesc_unnamed4364 {
  PrintfP__S_STOPPED, 
  PrintfP__S_STARTED, 
  PrintfP__S_FLUSHING
};

message_t PrintfP__printfMsg;
uint8_t PrintfP__state = PrintfP__S_STOPPED;

static inline void PrintfP__MainBoot__booted(void );



static inline void PrintfP__SerialControl__startDone(error_t error);









static inline void PrintfP__SerialControl__stopDone(error_t error);



static inline void PrintfP__retrySend__runTask(void );




static void PrintfP__sendNext(void );










int printfflush(void )   ;
#line 155
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error);
#line 168
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/opt/tinyos-2.1.1/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 73
static inline void LedsP__Leds__led0Toggle(void );
#line 88
static inline void LedsP__Leds__led1Toggle(void );
# 23 "/opt/tinyos-2.1.1/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void );



static inline void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void );
# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
static void BlinkIngaC__Timer0__startPeriodic(uint32_t dt);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
static BlinkIngaC__UserButtonGet__val_t BlinkIngaC__UserButtonGet__get(void );
# 59 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static error_t BlinkIngaC__UserButtonNotify__enable(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/Leds.nc"
static void BlinkIngaC__Leds__led0Toggle(void );
#line 72
static void BlinkIngaC__Leds__led1Toggle(void );
# 59 "BlinkIngaC.nc"
static inline void BlinkIngaC__Boot__booted(void );






static inline void BlinkIngaC__Timer0__fired(void );








static inline void BlinkIngaC__Timer1__fired(void );










static inline void BlinkIngaC__UserButtonNotify__notify(button_state_t state);
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
static error_t IngaP__UartCtl__start(void );
# 50 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaP.nc"
static inline error_t IngaP__SoftwareInit__init(void );




static inline void IngaP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);


static inline void IngaP__UartStream__receivedByte(uint8_t byte);


static inline void IngaP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
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



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0____nesc_unnamed4365 {
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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4366 {
#line 63
  AlarmToTimerC__0__fired = 9U
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
uint8_t arg_0x7f8e02e7fda0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4367 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 10U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4368 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4369 {

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









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/opt/tinyos-2.1.1/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t IngaIeeeEui64P__Resource__release(void );
#line 78
static error_t IngaIeeeEui64P__Resource__request(void );
# 65 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static error_t IngaIeeeEui64P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 61
uint8_t * data);
#line 81
static error_t IngaIeeeEui64P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, 
#line 77
uint8_t * data);
# 51 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
ieee_eui64_t IngaIeeeEui64P__eui;
#line 51
ieee_eui64_t IngaIeeeEui64P__eui_tmp;







static inline error_t IngaIeeeEui64P__SoftwareInit__init(void );




static inline void IngaIeeeEui64P__Boot__booted(void );



static inline void IngaIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);





static inline void IngaIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data);



static inline void IngaIeeeEui64P__Resource__granted(void );
# 39 "/opt/tinyos-2.1.1/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128I2CMasterP.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4370 {
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
uint8_t arg_0x7f8e02da17e8);
# 55 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02d9f9b8);
# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
uint8_t arg_0x7f8e02d9f9b8);
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
uint8_t arg_0x7f8e02da2640);
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4371 {
#line 75
  ArbiterP__0__grantedTask = 11U
};
#line 75
typedef int /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4372 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4373 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4374 {
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
uint8_t arg_0x7f8e02d469c8);
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 98
uint8_t * data);
#line 91
static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d43e28, 
# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
error_t error, uint16_t addr, uint8_t length, 
#line 88
uint8_t * data);
# 110 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d3c020);
# 78 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
uint8_t arg_0x7f8e02d3c020);





enum /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0____nesc_unnamed4375 {
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
enum /*Atm128I2CMasterP.Master*/Atm128I2CMasterPacketP__0____nesc_unnamed4376 {
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
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 41
static void HplAtm128InterruptSigP__IntSig0__fired(void );
# 50 "/opt/tinyos-2.1.1/tos/chips/atm1284/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 40
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 59
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 35
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__enable(bool rising);









static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableRisingEdge(void );



static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask(void );
# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable(void );
#line 43
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableFallingEdge(void );
#line 42
static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t val);
# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput(void );
#line 32
static bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__get(void );
# 51 "/opt/tinyos-2.1.1/tos/platforms/inga/SwitchToggleC.nc"
enum /*UserButtonC.SwitchToggleC*/SwitchToggleC__0____nesc_unnamed4377 {
#line 51
  SwitchToggleC__0__sendEvent = 12U
};
#line 51
typedef int /*UserButtonC.SwitchToggleC*/SwitchToggleC__0____nesc_sillytask_sendEvent[/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent];
#line 49
bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh;



static inline bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__get(void );

static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void );
#line 71
static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void );







static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void );
# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
static UserButtonP__GetLower__val_t UserButtonP__GetLower__get(void );
# 74 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
static void UserButtonP__Notify__notify(UserButtonP__Notify__val_t val);
#line 59
static error_t UserButtonP__NotifyLower__enable(void );
# 50 "/opt/tinyos-2.1.1/tos/platforms/inga/UserButtonP.nc"
static inline button_state_t UserButtonP__Get__get(void );








static inline error_t UserButtonP__Notify__enable(void );







static inline void UserButtonP__NotifyLower__notify(bool val);
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

# 126 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x91 = x;
}

#line 113
static inline uint8_t HplAtm1284Timer3P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x91;
}

#line 102
static inline void HplAtm1284Timer3P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1284Timer3P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1284Timer3P__TimerCtrl__setControlB(x.flat);
}

# 95 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 95
  HplAtm1284Timer3P__Timer__setScale(scale);
#line 95
}
#line 95
# 163 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__Timer__start(void )
#line 163
{
#line 163
  * (volatile uint8_t *)0x71 |= 1 << 0;
}

# 69 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 69
  HplAtm1284Timer3P__Timer__start();
#line 69
}
#line 69
# 93 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x94 = t;
}

# 58 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 58
  HplAtm1284Timer3P__Timer__set(t);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.1/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 51 "/opt/tinyos-2.1.1/tos/platforms/inga/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 51
{
  return MotePlatformP__SubInit__init();
}

# 23 "/opt/tinyos-2.1.1/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set(void )
#line 23
{
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )43U |= 1 << 7;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )43U |= 1 << 5;
}

# 29 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set();
#line 29
}
#line 29
# 27 "/opt/tinyos-2.1.1/tos/system/NoPinC.nc"
static inline void /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput(void )
#line 27
{
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*PlatformLedsC.NoPinC*/NoPinC__0__GeneralIO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )42U |= 1 << 7;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )42U |= 1 << 5;
}

# 35 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput();
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
# 76 "/opt/tinyos-2.1.1/tos/platforms/inga/MeasureClockC.nc"
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
# 48 "/opt/tinyos-2.1.1/tos/platforms/inga/PlatformP.nc"
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
# 25 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableRisingEdge(void )
#line 25
{
  return /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__enable(TRUE);
}

# 42 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableRisingEdge();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 29 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 43 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableFallingEdge(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 86 "BlinkIngaC.nc"
static inline void BlinkIngaC__UserButtonNotify__notify(button_state_t state)
#line 86
{
  printf("button pressed! %d\n", state);
  printfflush();
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
inline static void UserButtonP__Notify__notify(UserButtonP__Notify__val_t val){
#line 74
  BlinkIngaC__UserButtonNotify__notify(val);
#line 74
}
#line 74
# 67 "/opt/tinyos-2.1.1/tos/platforms/inga/UserButtonP.nc"
static inline void UserButtonP__NotifyLower__notify(bool val)
#line 67
{

  if (val) {
      UserButtonP__Notify__notify(BUTTON_RELEASED);
    }
  else 
#line 71
    {
      UserButtonP__Notify__notify(BUTTON_PRESSED);
    }
}

# 74 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
inline static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__val_t val){
#line 74
  UserButtonP__NotifyLower__notify(val);
#line 74
}
#line 74
# 79 "/opt/tinyos-2.1.1/tos/platforms/inga/SwitchToggleC.nc"
static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask(void )
#line 79
{
  bool pinHigh;

#line 81
  pinHigh = /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh;

  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__notify(pinHigh);

  if (pinHigh) {
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableFallingEdge();
    }
  else 
#line 87
    {
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge();
    }
}

# 53 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static bool PrintfP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 115 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void * PrintfP__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 120 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 120
{
  return 28;
}

# 57 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*PrintfC.QueueC*/QueueC__0__size;
}

# 58 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static uint8_t PrintfP__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 69 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__head];
}

#line 85
static inline /*PrintfC.QueueC*/QueueC__0__queue_t /*PrintfC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/QueueC__0__queue_t t = /*PrintfC.QueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/QueueC__0__Queue__empty()) {
      /*PrintfC.QueueC*/QueueC__0__head++;
      if (/*PrintfC.QueueC*/QueueC__0__head == 250) {
#line 90
        /*PrintfC.QueueC*/QueueC__0__head = 0;
        }
#line 91
      /*PrintfC.QueueC*/QueueC__0__size--;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static PrintfP__Queue__t  PrintfP__Queue__dequeue(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 49 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 147
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 147
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 149
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 166 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
#line 166
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 168
  __nesc_hton_uint8(header->type.nxdata, type);
}

# 151 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
#line 151
}
#line 151
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7f8e0310b650, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x7f8e0310b650, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.1.1/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 116 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 116
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 522 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 350 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 351
{
  return 0;
}

# 23 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7f8e033bb570, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7f8e033bb570) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7f8e033bb570, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 40 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 347
{
  return 0;
}

# 15 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7f8e033bb570){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7f8e033bb570) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7f8e033bb570);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 100 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
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

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x1C + 0x20) = 1 << 2;
}

# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__clear();
#line 45
}
#line 45
# 47 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )105U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )105U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )105U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__edge(low_to_high);
#line 59
}
#line 59
# 42 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x1D + 0x20) |= 1 << 2;
}

# 35 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__enable();
#line 35
}
#line 35
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
inline static error_t IngaIeeeEui64P__I2CPacket__write(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
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
# 78 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
static inline void IngaIeeeEui64P__Resource__granted(void )
#line 78
{
  IngaIeeeEui64P__eui_tmp.data[0] = 4;
  IngaIeeeEui64P__I2CPacket__write(I2C_START, 0x50, sizeof(uint8_t ), (uint8_t *)IngaIeeeEui64P__eui_tmp.data);
}

# 106 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(uint8_t id)
#line 106
{
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/Resource.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__granted(uint8_t arg_0x7f8e02d469c8){
#line 92
  switch (arg_0x7f8e02d469c8) {
#line 92
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 92
      IngaIeeeEui64P__Resource__granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__Resource__default__granted(arg_0x7f8e02d469c8);
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
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7f8e02da2640){
#line 92
  /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__granted(arg_0x7f8e02da2640);
#line 92
}
#line 92
# 213 "/opt/tinyos-2.1.1/tos/system/ArbiterP.nc"
static inline void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 213
{
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7f8e02d9f9b8){
#line 49
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7f8e02d9f9b8);
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
static inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )43U ^= 1 << 5;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__toggle();
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
inline static void BlinkIngaC__Leds__led0Toggle(void ){
#line 56
  LedsP__Leds__led0Toggle();
#line 56
}
#line 56
# 45 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )35U & (1 << 2)) != 0;
}

# 32 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 53 "/opt/tinyos-2.1.1/tos/platforms/inga/SwitchToggleC.nc"
static inline bool /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__get(void )
#line 53
{
#line 53
  return /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__get();
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
inline static UserButtonP__GetLower__val_t UserButtonP__GetLower__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Get__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 50 "/opt/tinyos-2.1.1/tos/platforms/inga/UserButtonP.nc"
static inline button_state_t UserButtonP__Get__get(void )
#line 50
{

  if (UserButtonP__GetLower__get()) {
      return BUTTON_RELEASED;
    }
  else 
#line 54
    {
      return BUTTON_PRESSED;
    }
}

# 55 "/opt/tinyos-2.1.1/tos/interfaces/Get.nc"
inline static BlinkIngaC__UserButtonGet__val_t BlinkIngaC__UserButtonGet__get(void ){
#line 55
  enum __nesc_unnamed4325 __nesc_result;
#line 55

#line 55
  __nesc_result = UserButtonP__Get__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 66 "BlinkIngaC.nc"
static inline void BlinkIngaC__Timer0__fired(void )
{
  printf("timer fired %d!\n", BlinkIngaC__UserButtonGet__get());
  printfflush();


  BlinkIngaC__Leds__led0Toggle();
}

# 48 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )43U ^= 1 << 7;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortD.Bit7*/HplAtm128GeneralIOPinP__31__IO__toggle();
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
inline static void BlinkIngaC__Leds__led1Toggle(void ){
#line 72
  LedsP__Leds__led1Toggle();
#line 72
}
#line 72
# 75 "BlinkIngaC.nc"
static inline void BlinkIngaC__Timer1__fired(void )
{
  BlinkIngaC__Leds__led1Toggle();
}

# 193 "/opt/tinyos-2.1.1/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7f8e02e7fda0){
#line 72
  switch (arg_0x7f8e02e7fda0) {
#line 72
    case 0U:
#line 72
      BlinkIngaC__Timer0__fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      BlinkIngaC__Timer1__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7f8e02e7fda0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
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

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP__retrySend__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PrintfP__retrySend);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static error_t PrintfP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 127 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__retrySend__runTask(void )
#line 127
{
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  PrintfP__AMSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 207 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7f8e0310c430, message_t * msg, error_t error){
#line 89
  switch (arg_0x7f8e0310c430) {
#line 89
    case 0U:
#line 89
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7f8e0310c430, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 111 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
#line 111
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

#line 113
  return __nesc_ntoh_uint8(header->length.nxdata);
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

#line 166
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7f8e03509508, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7f8e03509508, msg, error);
#line 99
}
#line 99
# 90 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 90
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 365 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 365
{
  return;
}

# 89 "/opt/tinyos-2.1.1/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7f8e033bc238, message_t * msg, error_t error){
#line 89
  switch (arg_0x7f8e033bc238) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7f8e033bc238, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 201
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 98 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 98
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7f8e03508780, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7f8e03508780, msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 360 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 362
{
  return msg;
}

# 67 "/opt/tinyos-2.1.1/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7f8e033bd6e8, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x7f8e033bd6e8) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7f8e033bd6e8, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 354 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 355
{
  return 0;
}

# 31 "/opt/tinyos-2.1.1/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7f8e033bb570, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7f8e033bb570) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7f8e033bb570, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 264 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 123 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__SerialControl__stopDone(error_t error)
#line 123
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 124
    PrintfP__state = PrintfP__S_STOPPED;
#line 124
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 117
  PrintfP__SerialControl__stopDone(error);
#line 117
}
#line 117
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
# 169 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 169
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 157 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 157
{
  * (volatile uint8_t *)0xC1 &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 93 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 84 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 330 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 330
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 335
{
  SerialP__SerialFlush__flushDone();
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 338 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 338
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 38 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 38
  SerialP__SerialFlush__default__flush();
#line 38
}
#line 38
# 326 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 326
{
  SerialP__SerialFlush__flush();
}

# 50 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )36U &= ~(1 << 2);
}

# 33 "/opt/tinyos-2.1.1/tos/interfaces/GeneralIO.nc"
inline static void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeInput();
#line 33
}
#line 33
# 55 "/opt/tinyos-2.1.1/tos/platforms/inga/SwitchToggleC.nc"
static inline error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable(void )
#line 55
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__makeInput();

  if (/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GeneralIO__get()) {
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh = TRUE;
      return /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableFallingEdge();
    }
  else 
#line 61
    {
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh = FALSE;
      return /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__enableRisingEdge();
    }
}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
inline static error_t UserButtonP__NotifyLower__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 59 "/opt/tinyos-2.1.1/tos/platforms/inga/UserButtonP.nc"
static inline error_t UserButtonP__Notify__enable(void )
#line 59
{
  return UserButtonP__NotifyLower__enable();
}

# 59 "/opt/tinyos-2.1.1/tos/interfaces/Notify.nc"
inline static error_t BlinkIngaC__UserButtonNotify__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = UserButtonP__Notify__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
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

static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.1.1/tos/lib/timer/Timer.nc"
inline static void BlinkIngaC__Timer0__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 53
}
#line 53
# 59 "BlinkIngaC.nc"
static inline void BlinkIngaC__Boot__booted(void )
{
  BlinkIngaC__Timer0__startPeriodic(100);
  BlinkIngaC__UserButtonNotify__enable();
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
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7f8e02da17e8){
#line 43
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7f8e02da17e8);
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
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__request(uint8_t arg_0x7f8e02d3c020){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(arg_0x7f8e02d3c020);
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
inline static error_t IngaIeeeEui64P__Resource__request(void ){
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
# 64 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
static inline void IngaIeeeEui64P__Boot__booted(void )
#line 64
{
  IngaIeeeEui64P__Resource__request();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void PrintfP__Boot__booted(void ){
#line 49
  IngaIeeeEui64P__Boot__booted();
#line 49
  BlinkIngaC__Boot__booted();
#line 49
}
#line 49
# 113 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__SerialControl__startDone(error_t error)
#line 113
{
  if (PrintfP__state == PrintfP__S_STOPPED) {

      __iob[1] = &atm128_stdout;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
        PrintfP__state = PrintfP__S_STARTED;
#line 118
        __nesc_atomic_end(__nesc_atomic); }
      PrintfP__Boot__booted();
    }
}

# 92 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 92
  PrintfP__SerialControl__startDone(error);
#line 92
}
#line 92
# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
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
# 320 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 320
{
  SerialP__SerialControl__start();
  SerialP__SplitControl__startDone(SUCCESS);
}

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
# 45 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 183 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 80 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 80
}
#line 80
# 242 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
          retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
          if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 273
            SerialP__ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP__RunTx__runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP__txSeqno++;
      if (SerialP__txProto == SERIAL_PROTO_ACK) {
          SerialP__ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP__offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP__txProto = SERIAL_PROTO_ACK;
              SerialP__txIndex = SerialP__TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP__txIndex = SerialP__TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }

  if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
      SerialP__testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
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
# 214 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 214
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP__rxInit(void )
#line 205
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_NOSYNC;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 193
static __inline void SerialP__txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_IDLE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 218
static inline error_t SerialP__Init__init(void )
#line 218
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

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

# 155 "/opt/tinyos-2.1.1/tos/platforms/inga/MeasureClockC.nc"
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

# 74 "/opt/tinyos-2.1.1/tos/interfaces/StdControl.nc"
inline static error_t IngaP__UartCtl__start(void ){
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
# 50 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaP.nc"
static inline error_t IngaP__SoftwareInit__init(void )
#line 50
{
  IngaP__UartCtl__start();
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

# 59 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
static inline error_t IngaIeeeEui64P__SoftwareInit__init(void )
#line 59
{
  memset(IngaIeeeEui64P__eui.data, 0, sizeof  IngaIeeeEui64P__eui.data);
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
  __nesc_result = ecombine(__nesc_result, IngaIeeeEui64P__SoftwareInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1284AlarmAsyncP*/Atm1284AlarmAsyncP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, IngaP__SoftwareInit__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 342 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 342
{
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.1.1/tos/interfaces/SplitControl.nc"
inline static error_t PrintfP__SerialControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialP__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 109 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static inline void PrintfP__MainBoot__booted(void )
#line 109
{
  PrintfP__SerialControl__start();
}

# 49 "/opt/tinyos-2.1.1/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 49
  PrintfP__MainBoot__booted();
#line 49
}
#line 49
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
# 387 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 387
{
  SerialP__rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 83
  SerialP__SerialFrameComm__dataReceived(data);
#line 83
}
#line 83
# 384 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 384
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 74
  SerialP__SerialFrameComm__delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 58 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaP.nc"
static inline void IngaP__UartStream__receivedByte(uint8_t byte)
#line 58
{
}

# 79 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  IngaP__UartStream__receivedByte(byte);
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 61 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaP.nc"
static inline void IngaP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 61
{
}

# 99 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  IngaP__UartStream__receiveDone(buf, len, error);
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
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
# 391 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 309 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 69
}
#line 69
# 210 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 232 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 252
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP__MaybeScheduleTx();
    }
}

# 233 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/opt/tinyos-2.1.1/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 58
}
#line 58
# 299 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 305
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP__rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 295
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP__rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 55
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 68
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 513 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 167 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.1.1/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 642 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP__txState) {

        case SerialP__TXSTATE_PROTO: 

          txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

        SerialP__txState = SerialP__TXSTATE_INFO;



        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
        break;

        case SerialP__TXSTATE_SEQNO: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
        SerialP__txState = SerialP__TXSTATE_INFO;
        SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
        break;

        case SerialP__TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP__TXSTATE_FCS1: 
          txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
        SerialP__txState = SerialP__TXSTATE_FCS2;
        break;

        case SerialP__TXSTATE_FCS2: 
          txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
        SerialP__txState = SerialP__TXSTATE_ENDFLAG;
        break;

        case SerialP__TXSTATE_ENDFLAG: 
          txResult = SerialP__SerialFrameComm__putDelimiter();
        SerialP__txState = SerialP__TXSTATE_ENDWAIT;
        break;

        case SerialP__TXSTATE_ENDWAIT: 
          SerialP__txState = SerialP__TXSTATE_FINISH;
        case SerialP__TXSTATE_FINISH: 
          SerialP__MaybeScheduleTx();
        break;
        case SerialP__TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP__txState = SerialP__TXSTATE_ERROR;
        SerialP__MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.1.1/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 89
  SerialP__SerialFrameComm__putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
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
# 104 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC__state.sendEscape) {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
      HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
    }
  else {
      HdlcTranslateC__SerialFrameComm__putDone();
    }
}

# 55 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaP.nc"
static inline void IngaP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 55
{
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  IngaP__UartStream__sendDone(buf, len, error);
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
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
# 214 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__CompareA__default__fired(void )
#line 214
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1284Timer3P__CompareA__fired(void ){
#line 49
  HplAtm1284Timer3P__CompareA__default__fired();
#line 49
}
#line 49
# 218 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__CompareB__default__fired(void )
#line 218
{
}

# 49 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1284Timer3P__CompareB__fired(void ){
#line 49
  HplAtm1284Timer3P__CompareB__default__fired();
#line 49
}
#line 49
# 222 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline void HplAtm1284Timer3P__Capture__default__captured(uint16_t time)
#line 222
{
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1284Timer3P__Capture__captured(HplAtm1284Timer3P__Capture__size_type t){
#line 51
  HplAtm1284Timer3P__Capture__default__captured(t);
#line 51
}
#line 51
# 208 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
static inline uint16_t HplAtm1284Timer3P__Capture__get(void )
#line 208
{
#line 208
  return * (volatile uint16_t *)0x96;
}

# 216 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.1.1/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.1.1/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 51 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 51
{
}

# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1284Timer3P__Timer__overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 61
}
#line 61
# 61 "/opt/tinyos-2.1.1/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 250;
}

#line 97
static inline error_t /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(/*PrintfC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/QueueC__0__Queue__size() < /*PrintfC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC__0__queue[/*PrintfC.QueueC*/QueueC__0__tail] = newVal;
      /*PrintfC.QueueC*/QueueC__0__tail++;
      if (/*PrintfC.QueueC*/QueueC__0__tail == 250) {
#line 102
        /*PrintfC.QueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*PrintfC.QueueC*/QueueC__0__size++;
      /*PrintfC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-2.1.1/tos/interfaces/Queue.nc"
inline static error_t PrintfP__Queue__enqueue(PrintfP__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*PrintfC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
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
inline static error_t IngaIeeeEui64P__I2CPacket__read(i2c_flags_t flags, uint16_t addr, uint8_t length, uint8_t * data){
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
# 74 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
static inline void IngaIeeeEui64P__I2CPacket__writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 74
{
  IngaIeeeEui64P__I2CPacket__read(I2C_START | I2C_STOP, 0x50, sizeof  IngaIeeeEui64P__eui_tmp.data, IngaIeeeEui64P__eui_tmp.data);
}

# 107 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 107
{
}

# 101 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__writeDone(uint8_t arg_0x7f8e02d43e28, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 101
  switch (arg_0x7f8e02d43e28) {
#line 101
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 101
      IngaIeeeEui64P__I2CPacket__writeDone(error, addr, length, data);
#line 101
      break;
#line 101
    default:
#line 101
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__writeDone(arg_0x7f8e02d43e28, error, addr, length, data);
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
inline static error_t /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__SubResource__release(uint8_t arg_0x7f8e02d3c020){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(arg_0x7f8e02d3c020);
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
inline static error_t IngaIeeeEui64P__Resource__release(void ){
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
# 68 "/opt/tinyos-2.1.1/tos/platforms/inga/IngaIeeeEui64P.nc"
static inline void IngaIeeeEui64P__I2CPacket__readDone(error_t error, uint16_t addr, uint8_t length, uint8_t *data)
#line 68
{
  if (error == SUCCESS) {
    /* atomic removed: atomic calls only */
#line 70
    memcpy(IngaIeeeEui64P__eui.data, IngaIeeeEui64P__eui_tmp.data, sizeof  IngaIeeeEui64P__eui.data);
    }
#line 71
  IngaIeeeEui64P__Resource__release();
}

# 108 "/opt/tinyos-2.1.1/tos/chips/atm128/i2c/Atm128I2CMasterImplP.nc"
static inline void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(uint8_t id, error_t error, uint16_t addr, uint8_t len, uint8_t *data)
#line 108
{
}

# 91 "/opt/tinyos-2.1.1/tos/interfaces/I2CPacket.nc"
inline static void /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__readDone(uint8_t arg_0x7f8e02d43e28, error_t error, uint16_t addr, uint8_t length, uint8_t * data){
#line 91
  switch (arg_0x7f8e02d43e28) {
#line 91
    case /*LocalIeeeEui64C.Atm128I2CMasterC*/Atm128I2CMasterC__0__CLIENT_ID:
#line 91
      IngaIeeeEui64P__I2CPacket__readDone(error, addr, length, data);
#line 91
      break;
#line 91
    default:
#line 91
      /*Atm128I2CMasterP.I2C*/Atm128I2CMasterImplP__0__I2CPacket__default__readDone(arg_0x7f8e02d43e28, error, addr, length, data);
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
inline static void /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7f8e02d9f9b8){
#line 55
    /*Atm128I2CMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7f8e02d9f9b8);
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
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 63
{
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 41
}
#line 41
# 56 "/opt/tinyos-2.1.1/tos/interfaces/TaskBasic.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 43 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x1D + 0x20) &= ~(1 << 2);
}

# 40 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static error_t /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 71 "/opt/tinyos-2.1.1/tos/platforms/inga/SwitchToggleC.nc"
static inline void /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired(void )
#line 71
{
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__disable();

  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh = !/*UserButtonC.SwitchToggleC*/SwitchToggleC__0__m_pinHigh;

  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__postTask();
}

# 57 "/opt/tinyos-2.1.1/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 57
  /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__GpioInterrupt__fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 64 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 64
  /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 41 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 41
}
#line 41
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f8e0375f4c8){
#line 64
  switch (arg_0x7f8e0375f4c8) {
#line 64
    case SerialP__RunTx:
#line 64
      SerialP__RunTx__runTask();
#line 64
      break;
#line 64
    case SerialP__startDoneTask:
#line 64
      SerialP__startDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__stopDoneTask:
#line 64
      SerialP__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case SerialP__defaultSerialFlushTask:
#line 64
      SerialP__defaultSerialFlushTask__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case PrintfP__retrySend:
#line 64
      PrintfP__retrySend__runTask();
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
    case /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent:
#line 64
      /*UserButtonC.SwitchToggleC*/SwitchToggleC__0__sendEvent__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7f8e0375f4c8);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 143 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 143
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 144
    {
      if (PrintfP__state == PrintfP__S_FLUSHING) 
        {
          int __nesc_temp = 
#line 146
          SUCCESS;

          {
#line 146
            __nesc_atomic_end(__nesc_atomic); 
#line 146
            return __nesc_temp;
          }
        }
#line 147
      if (PrintfP__Queue__empty()) 
        {
          int __nesc_temp = 
#line 148
          FAIL;

          {
#line 148
            __nesc_atomic_end(__nesc_atomic); 
#line 148
            return __nesc_temp;
          }
        }
#line 149
      PrintfP__state = PrintfP__S_FLUSHING;
    }
#line 150
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP__sendNext();
  return SUCCESS;
}

#line 132
static void PrintfP__sendNext(void )
#line 132
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP__Packet__getPayload(&PrintfP__printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP__Queue__size() < sizeof(printf_msg_t ) ? PrintfP__Queue__size() : sizeof(printf_msg_t );

#line 136
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].nxdata, PrintfP__Queue__dequeue());
  if (PrintfP__AMSend__send(AM_BROADCAST_ADDR, &PrintfP__printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP__retrySend__postTask();
    }
}

# 124 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 124
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 45 "/opt/tinyos-2.1.1/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 161 "/opt/tinyos-2.1.1/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 163
  return __nesc_ntoh_uint8(header->type.nxdata);
}

#line 137
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
#line 137
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 139
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 502 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 509
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

# 15 "/opt/tinyos-2.1.1/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 16
    {
      /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
      /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
      /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
      /*HplUserButtonC.InterruptUserButtonC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
    }
#line 21
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

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

# 155 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
static void PrintfP__AMSend__sendDone(message_t *msg, error_t error)
#line 155
{
  if (error == SUCCESS) {
      if (PrintfP__Queue__size() > 0) {
        PrintfP__sendNext();
        }
      else {
#line 159
        PrintfP__state = PrintfP__S_STARTED;
        }
    }
  else {
#line 161
    PrintfP__retrySend__postTask();
    }
}

# 155 "/opt/tinyos-2.1.1/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 77 "/opt/tinyos-2.1.1/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
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

# 347 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
      SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP__offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP__offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 86
{
  HdlcTranslateC__state.sendEscape = 0;
  HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
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

__attribute((signal))   void __vector_20(void )
#line 215
{
  if ((* (volatile uint8_t *)0xC0 & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)0xC6);
    }
}

# 402 "/opt/tinyos-2.1.1/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 81 "/opt/tinyos-2.1.1/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 285 "/opt/tinyos-2.1.1/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 297
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 221 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_22(void )
#line 221
{
  HplAtm128UartP__HplUart0__txDone();
}

# 92 "/opt/tinyos-2.1.1/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 309 "/opt/tinyos-2.1.1/tos/chips/atm1284/HplAtm128UartP.nc"
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

# 215 "/opt/tinyos-2.1.1/tos/chips/atm1284/timer/HplAtm1284Timer3P.nc"
__attribute((interrupt))   void __vector_32(void )
#line 215
{
  HplAtm1284Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_33(void )
#line 219
{
  HplAtm1284Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_31(void )
#line 223
{
  HplAtm1284Timer3P__Capture__captured(HplAtm1284Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_34(void )
#line 227
{
  HplAtm1284Timer3P__Timer__overflow();
}

# 168 "/opt/tinyos-2.1.1/tos/lib/printf/PrintfP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 168
{








  if (PrintfP__state == PrintfP__S_STARTED && PrintfP__Queue__size() >= 250 / 2) {
      PrintfP__state = PrintfP__S_FLUSHING;
      PrintfP__sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
    {
      if (PrintfP__Queue__enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 183
          0;

          {
#line 183
            __nesc_atomic_end(__nesc_atomic); 
#line 183
            return __nesc_temp;
          }
        }
      else 
#line 184
        {
          int __nesc_temp = 
#line 184
          -1;

          {
#line 184
            __nesc_atomic_end(__nesc_atomic); 
#line 184
            return __nesc_temp;
          }
        }
    }
#line 187
    __nesc_atomic_end(__nesc_atomic); }
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

# 50 "/opt/tinyos-2.1.1/tos/chips/atm1284/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 50
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 55
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 60
{
  HplAtm128InterruptSigP__IntSig2__fired();
}

