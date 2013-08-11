#include <stdint.h>
#include "bitslice.h"
#include "util.h"

int main(void)
{
	uint8_t bitmap[9][2][3] = { 
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
		{
			{ 0xFF, 0xFF, 0xFF },
			{ 0x00, 0x00, 0x00 },
		},
	};

	hexdump(bitmap, sizeof(bitmap));

	uint8_t out[1024];

	bitslice(out, NULL, bitmap, 9, 2, 1);

	hexdump(out, 8 * 2 * 3);
}