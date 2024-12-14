

#ifndef _OV8856_SUNNY_H
#define _OV8856_SUNNY_H

#include "k3_isp_io.h"

#define INVMASK(v)              (0xff-v)

/***********************************************************************
 *
 * ov8856 init sensor registers list
 *
 ***********************************************************************/
const struct _sensor_reg_t ov8856_sunny_init_regs[] = {
  {0x0100, 0x00},
  {0x0302, 0x3c},
  {0x0303, 0x01},
  {0x031e, 0x0c},
  {0x3000, 0x00},
  {0x300e, 0x00},
  {0x3010, 0x00},
  {0x3015, 0x84},
  {0x3018, 0x32},
  {0x3033, 0x24},
  {0x3500, 0x00},
  {0x3501, 0x4c},
  {0x3502, 0xe0},
  {0x3503, 0x08},
  {0x3505, 0x83},
  {0x3508, 0x01},
  {0x3509, 0x80},
  {0x350c, 0x00},
  {0x350d, 0x80},
  {0x350e, 0x04},
  {0x350f, 0x00},
  {0x3510, 0x00},
  {0x3511, 0x02},
  {0x3512, 0x00},
  {0x3600, 0x72},
  {0x3601, 0x40},
  {0x3602, 0x30},
  {0x3610, 0xc5},
  {0x3611, 0x58},
  {0x3612, 0x5c},
  {0x3613, 0x5a},
  {0x3614, 0x60},
  {0x3628, 0xff},
  {0x3629, 0xff},
  {0x362a, 0xff},
  {0x3633, 0x10},
  {0x3634, 0x10},
  {0x3635, 0x10},
  {0x3636, 0x10},
  {0x3663, 0x08},
  {0x3669, 0x34},
  {0x366e, 0x08},
  {0x3706, 0x86},
  {0x370b, 0x7e},
  {0x3714, 0x27},
  {0x3730, 0x12},
  {0x3733, 0x10},
  {0x3764, 0x00},
  {0x3765, 0x00},
  {0x3769, 0x62},
  {0x376a, 0x2a},
  {0x376b, 0x36},
  {0x3780, 0x00},
  {0x3781, 0x24},
  {0x3782, 0x00},
  {0x3783, 0x23},
  {0x3798, 0x2f},
  {0x37a1, 0x60},
  {0x37a8, 0x6a},
  {0x37ab, 0x3f},
  {0x37c2, 0x14},
  {0x37c3, 0xf1},
  {0x37c9, 0x80},
  {0x37cb, 0x03},
  {0x37cc, 0x0a},
  {0x37cd, 0x16},
  {0x37ce, 0x1f},
  {0x3800, 0x00},
  {0x3801, 0x00},
  {0x3802, 0x00},
  {0x3803, 0x0c},
  {0x3804, 0x0c},
  {0x3805, 0xdf},
  {0x3806, 0x09},
  {0x3807, 0xa3},
  {0x3808, 0x06},
  {0x3809, 0x60},
  {0x380a, 0x04},
  {0x380b, 0xc8},
  {0x380c, 0x0e},
  {0x380d, 0xa0},
  {0x380e, 0x04},
  {0x380f, 0xde},
  {0x3810, 0x00},
  {0x3811, 0x08},
  {0x3812, 0x00},
  {0x3813, 0x02},
  {0x3814, 0x03},
  {0x3815, 0x01},
  {0x3816, 0x00},
  {0x3817, 0x00},
  {0x3818, 0x00},
  {0x3819, 0x00},
  {0x3820, 0xd6},
  {0x3821, 0x61},
  {0x382a, 0x03},
  {0x382b, 0x01},
  {0x3830, 0x06},
  {0x3836, 0x02},
  {0x3862, 0x04},
  {0x3863, 0x08},
  {0x3cc0, 0x33},
  {0x3d85, 0x17},
  {0x3d8c, 0x73},
  {0x3d8d, 0xde},
  {0x4001, 0xe0},
  {0x4003, 0x40},
  {0x4008, 0x00},
  {0x4009, 0x05},
  {0x400f, 0x80},
  {0x4010, 0xf0},
  {0x4011, 0xff},
  {0x4012, 0x02},
  {0x4013, 0x01},
  {0x4014, 0x01},
  {0x4015, 0x01},
  {0x4042, 0x00},
  {0x4043, 0x80},
  {0x4044, 0x00},
  {0x4045, 0x80},
  {0x4046, 0x00},
  {0x4047, 0x80},
  {0x4048, 0x00},
  {0x4049, 0x80},
  {0x4041, 0x03},
  {0x404c, 0x20},
  {0x404d, 0x00},
  {0x404e, 0x20},
  {0x4203, 0x80},
  {0x4307, 0x30},
  {0x4317, 0x00},
  {0x4503, 0x08},
  {0x4601, 0x80},
  {0x4816, 0x53},
  {0x481b, 0x58},
  {0x481f, 0x27},
  {0x4837, 0x16},
  {0x5000, 0x77},
  {0x5001, 0x0e},
  {0x5004, 0x00},
  {0x502e, 0x00},
  {0x5030, 0x41},
  {0x5795, 0x00},
  {0x5796, 0x10},
  {0x5797, 0x10},
  {0x5798, 0x73},
  {0x5799, 0x73},
  {0x579a, 0x00},
  {0x579b, 0x28},
  {0x579c, 0x00},
  {0x579d, 0x16},
  {0x579e, 0x06},
  {0x579f, 0x20},
  {0x57a0, 0x04},
  {0x57a1, 0xa0},
  {0x5780, 0x14},
  {0x5781, 0x0f},
  {0x5782, 0x44},
  {0x5783, 0x02},
  {0x5784, 0x01},
  {0x5785, 0x01},
  {0x5786, 0x00},
  {0x5787, 0x04},
  {0x5788, 0x02},
  {0x5789, 0x0f},
  {0x578a, 0xfd},
  {0x578b, 0xf5},
  {0x578c, 0xf5},
  {0x578d, 0x03},
  {0x578e, 0x08},
  {0x578f, 0x0c},
  {0x5790, 0x08},
  {0x5791, 0x04},
  {0x5792, 0x00},
  {0x5793, 0x52},
  {0x5794, 0xa3},
  {0x5a08, 0x02},
  {0x5b00, 0x02},
  {0x5b01, 0x10},
  {0x5b02, 0x03},
  {0x5b03, 0xcf},
  {0x5b05, 0x6c},
  {0x5e00, 0x00},
};

/*1600x1200*/
static const struct _sensor_reg_t ov8856_sunny_framesize_quarter[] = {
/*OV8856 2lane 1600x1200 29.7fps sysclk=139876000 MIPICLK=699.38Mbps*/
  {0x0100, 0X00},
  {0x0300, 0X00},
  {0x0302, 0X44},//3c for 20.57M main clock
  {0x0303, 0X01},
  {0x030d, 0X22},//for 20.57M main clock
  {0x3501, 0X4c},
  {0x3502, 0Xe0},
  {0x366e, 0X08},
  {0x3714, 0X27},
  {0x37c2, 0X14},
  {0x3800, 0X00},
  {0x3801, 0X00},
  {0x3802, 0X00},
  {0x3803, 0X0c},
  {0x3804, 0X0c},
  {0x3805, 0Xdf},
  {0x3806, 0X09},
  {0x3807, 0Xa3},
  {0x3808, 0X06},
  {0x3809, 0X40},
  {0x380a, 0X04},
  {0x380b, 0Xb0},
  {0x380c, 0X0d},/*hts*/
  {0x380d, 0Xca},
  {0x380e, 0X05},/*vts*/
  {0x380f, 0X36},
  {0x3810, 0X00},
  {0x3811, 0X08},
  {0x3812, 0X00},
  {0x3813, 0X02},
  {0x3814, 0X03},
  {0x3820, 0Xd6},
  {0x3821, 0X61},
  {0x382a, 0X03},
  {0x4009, 0X05},
  {0x4837, 0X16},
  {0x5795, 0X00},
  {0x5796, 0X10},
  {0x5797, 0X10},
  {0x5798, 0X73},
  {0x5799, 0X73},
  {0x579a, 0X00},
  {0x579b, 0X28},
  {0x579c, 0X00},
  {0x579d, 0X16},
  {0x579e, 0X06},
  {0x579f, 0X20},
  {0x57a0, 0X04},
  {0x57a1, 0Xa0},
  {0x0100, 0X01},
};

/*3264x2448 full size*/
static const struct _sensor_reg_t ov8856_sunny_framesize_full[] = {
/*OV8856 2lane 3264x2448 15fps sysclk=139876000 MIPICLK=699.38Mbps*/
  {0X0100, 0x00},
  {0X0300, 0x00},
  {0X0302, 0x44},//3c for 20.57M main clock
  {0X0303, 0x01},
  {0X030d, 0x22},//for 20.57M main clock
  {0X3501, 0x9a},
  {0X3502, 0x20},
  {0X366e, 0x10},
  {0X3714, 0x23},
  {0X37c2, 0x04},
  {0X3800, 0x00},
  {0X3801, 0x00},
  {0X3802, 0x00},
  {0X3803, 0x0c},
  {0X3804, 0x0c},
  {0X3805, 0xdf},
  {0X3806, 0x09},
  {0X3807, 0xa3},
  {0X3808, 0x0c},
  {0X3809, 0xc0},
  {0X380a, 0x09},
  {0X380b, 0x90},
  {0X380c, 0x0d},/*hts*/
  {0X380d, 0x64},
  {0X380e, 0x0a},/*vts*/
  {0X380f, 0xa0},
  {0X3810, 0x00},
  {0X3811, 0x10},
  {0X3812, 0x00},
  {0X3813, 0x04},
  {0X3814, 0x01},
  {0X3820, 0xc6},
  {0X3821, 0x40},
  {0X382a, 0x01},
  {0X4009, 0x0b},
  {0X4837, 0x16},
  {0X5795, 0x02},
  {0X5796, 0x20},
  {0X5797, 0x20},
  {0X5798, 0xd5},
  {0X5799, 0xd5},
  {0X579a, 0x00},
  {0X579b, 0x50},
  {0X579c, 0x00},
  {0X579d, 0x2c},
  {0X579e, 0x0c},
  {0X579f, 0x40},
  {0X57a0, 0x09},
  {0X57a1, 0x40},
  {0X0100, 0x01},
};
#endif /* OV8856_H_INCLUDED */

/***************** END *******************/
