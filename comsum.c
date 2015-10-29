/**
 * comsum
 * Copyright (C) 2015 Sindastra <sindastra@gmail.com>
 *
 * The above copyright notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <string.h>

short showCode;
short matches;
short silent;
char *checksum1;
char *checksum2;

void showHelp()
{
	puts("Usage: comsum [-cs] <checksum1> <checksum2>");
	puts("\t-c\tDisplay a code instead of human readable output.");
	puts("\t\t0 for match, 1 for mismatch.");
	puts("\t-s\tDo not reflect checksums (kinda silent).");
}

int main( int argc , char *argv[] )
{

	if( argc < 3 )
	{
		showHelp();
		return 0;
	}

	if( argc == 4)
	{
		if( *(argv[1]+0) == '-' )
		{
			for(int i = 0;*(argv[1]+i) != 0;i++)
			{
				switch( *(argv[1]+i) )
				{
					case 'c':
						showCode = 1;
						break;
					case 's':
						silent = 1;
						break;
				}
			}
		}
	}

	checksum1 = argv[argc-2];
	checksum2 = argv[argc-1];

	if(!silent)
	{
		puts(checksum1);
		puts(checksum2);
	}
	
	if( strcmp(checksum1, checksum2) == 0 )
		matches = 1;

	if( matches )
		if(showCode)
			puts("0");
		else
			puts("The checksums match!");
	else
		if(showCode)
			puts("1");
		else
			puts("The checksums do not match!");

	return 0;
	
}