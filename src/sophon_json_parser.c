typedef enum {
	T_BEGIN = 255,
	T_null,	/* 256 */
	T_true,	/* 257 */
	T_false,	/* 258 */
	T_break,	/* 259 */
	T_do,	/* 260 */
	T_in,	/* 261 */
	T_typeof,	/* 262 */
	T_case,	/* 263 */
	T_else,	/* 264 */
	T_instanceof,	/* 265 */
	T_var,	/* 266 */
	T_catch,	/* 267 */
	T_export,	/* 268 */
	T_new,	/* 269 */
	T_void,	/* 270 */
	T_class,	/* 271 */
	T_extends,	/* 272 */
	T_return,	/* 273 */
	T_while,	/* 274 */
	T_const,	/* 275 */
	T_finally,	/* 276 */
	T_super,	/* 277 */
	T_with,	/* 278 */
	T_continue,	/* 279 */
	T_for,	/* 280 */
	T_switch,	/* 281 */
	T_yield,	/* 282 */
	T_debugger,	/* 283 */
	T_function,	/* 284 */
	T_this,	/* 285 */
	T_default,	/* 286 */
	T_if,	/* 287 */
	T_throw,	/* 288 */
	T_delete,	/* 289 */
	T_import,	/* 290 */
	T_try,	/* 291 */
	T_enum,	/* 292 */
	T_await,	/* 293 */
	T_get,	/* 294 */
	T_set,	/* 295 */
	T_public,	/* 296 */
	T_interface,	/* 297 */
	T_implements,	/* 298 */
	T_let,	/* 299 */
	T_private,	/* 300 */
	T_protected,	/* 301 */
	T_package,	/* 302 */
	T_static,	/* 303 */
	T_SUSP,	/* 304 */
	T_LE,	/* 305 */
	T_GE,	/* 306 */
	T_EQU,	/* 307 */
	T_NEQ,	/* 308 */
	T_SAME,	/* 309 */
	T_NSAME,	/* 310 */
	T_INC,	/* 311 */
	T_DEC,	/* 312 */
	T_SHL,	/* 313 */
	T_SHR,	/* 314 */
	T_USHR,	/* 315 */
	T_AND,	/* 316 */
	T_OR,	/* 317 */
	T_ADD_ASSIGN,	/* 318 */
	T_SUB_ASSIGN,	/* 319 */
	T_MUL_ASSIGN,	/* 320 */
	T_DIV_ASSIGN,	/* 321 */
	T_MOD_ASSIGN,	/* 322 */
	T_SHL_ASSIGN,	/* 323 */
	T_SHR_ASSIGN,	/* 324 */
	T_USHR_ASSIGN,	/* 325 */
	T_BAND_ASSIGN,	/* 326 */
	T_BOR_ASSIGN,	/* 327 */
	T_XOR_ASSIGN,	/* 328 */
	T_LAMBDA,	/* 329 */
	T_NUMBER,	/* 330 */
	T_STRING,	/* 331 */
	T_REGEXP,	/* 332 */
	T_IDENTIFIER,	/* 333 */
	N_START = 334,
	N_JSON_TEXT,	/* 335 */
	N_JSON_VALUE,	/* 336 */
	N_JSON_OBJECT,	/* 337 */
	N_JSON_ARRAY,	/* 338 */
	N_JSON_MEMBER_LIST,	/* 339 */
	N_JSON_ELEMENT_LIST,	/* 340 */
	N_JSON_MEMBER_LIST_OR_EMPTY,	/* 341 */
	N_JSON_ELEMENT_LIST_OR_EMPTY,	/* 342 */
	N_JSON_MEMBER,	/* 343 */
	T_END
} ParserTokenType;
typedef enum {
	R_BEGIN,
	R_ACCEPT,	/* 1 */
	R_TRUE,	/* 2 */
	R_FALSE,	/* 3 */
	R_NULL,	/* 4 */
	R_COPY,	/* 5 */
	R_COPY_1,	/* 6 */
	R_EMPTY_ARRAY,	/* 7 */
	R_EMPTY_OBJECT,	/* 8 */
	R_ELEMENT,	/* 9 */
	R_APPEND_ELEMENT,	/* 10 */
	R_MEMBER,	/* 11 */
	R_MEMBER_OBJECT,	/* 12 */
	R_APPEND_MEMBER,	/* 13 */
	R_END
} ParserReduceType;
#define N_ERROR    0xFFF
#define N_REDUCE   0xFFE
#define T_EPSILON  0xFFFF
#define R_NONE     0xFFFFFFFF
#define RV_GET_REDUCE(r)     ((r) & 0xFFF)
#define RV_GET_TOKEN(r)      (((r) >> 12) & 0xFFF)
#define RV_GET_POP(r)        (((r) >> 24) & 0x7F)
#define RV_GET_POP_FLAG(r)   ((r) & 0x80000000)
static const Sophon_U16 json_state_shifts[] = {
	0x000a, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0016, 0x001a, 0xffff, 0xffff, 0x001b, 0x001c, 0xffff, 
	0x001d, 0x001e, 0xffff, 0x001f, 0xffff, 0x0029, 0xffff, 0x002b, 0xffff, 0x0035, 0xffff, 0xffff, 0xffff
};
static const Sophon_U32 json_state_reduce[] = {
	0xffffffff, 0x81150004, 0x81150002, 0x8114e000, 0x81150003, 0x8114f001, 0x81150005, 0x81150005, 
	0x81150005, 0x80156007, 0x80155008, 0x81150005, 0x81154009, 0x81156005, 0xffffffff, 0xffffffff, 
	0x81155005, 0xffffffff, 0x8115300c, 0xffffffff, 0xffffffff, 0xffffffff, 0x83152006, 0xffffffff, 
	0x83151006, 0xffffffff, 0x8315400a, 0x8315300d, 0x8315700b
};
static const Sophon_U16 json_state_jumps[] = {
	0x0006, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0012, 0x0019, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0025, 0xffff, 0x002a, 0xffff, 0x0031, 0xffff, 0xffff, 0xffff
};
static const Sophon_U16 json_edge_next[] = {
	0xffff, 0x0000, 0xffff, 0x0001, 0x0002, 0x0004, 0x0005, 0x0003, 0x0007, 0x0008, 0x0009, 0xffff, 0x000b, 0xffff, 0x000c, 0x000d, 
	0x000f, 0x0010, 0x0011, 0x000e, 0x0013, 0x0014, 0x0015, 0xffff, 0x0017, 0x0018, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0x0020, 0xffff, 0x0021, 0x0022, 0x0024, 0x0023, 0x0026, 0x0027, 0x0028, 0xffff, 0xffff, 0xffff, 0x002c, 0xffff, 0x002d, 
	0x002e, 0x0030, 0x002f, 0x0032, 0x0033, 0x0034
};
static const Sophon_U16 json_edge_symbol[] = {
	0x0100, 0x0101, 0x014f, 0x0102, 0x0150, 0x0151, 0x0152, 0x014a, 0x005b, 0x007b, 0x014b, 0x0100, 0x0101, 0x0150, 0x0102, 0x0151, 
	0x0152, 0x0154, 0x0156, 0x014a, 0x005b, 0x007b, 0x014b, 0x0153, 0x0155, 0x0157, 0x014b, 0x002c, 0x005d, 0x002c, 0x007d, 0x003a, 
	0x0100, 0x0101, 0x0150, 0x0102, 0x0151, 0x0152, 0x014a, 0x005b, 0x007b, 0x014b, 0x0157, 0x014b, 0x0100, 0x0101, 0x0150, 0x0102, 
	0x0151, 0x0152, 0x014a, 0x005b, 0x007b, 0x014b
};
static const Sophon_U16 json_edge_dest[] = {
	0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x0001, 0x0002, 0x000c, 0x0004, 0x0006, 
	0x0007, 0x000d, 0x000e, 0x0008, 0x0009, 0x000a, 0x000b, 0x0010, 0x0011, 0x0012, 0x0013, 0x0015, 0x0016, 0x0017, 0x0018, 0x0019, 
	0x0001, 0x0002, 0x001a, 0x0004, 0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x001b, 0x0013, 0x0001, 0x0002, 0x001c, 0x0004, 
	0x0006, 0x0007, 0x0008, 0x0009, 0x000a, 0x000b
};
