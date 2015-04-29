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

int i, matches = 1;
char *checksum1, *checksum2;

int main( int argc , char *argv[] )
{

	if( argc < 3 )
	{
		puts("Usage: comsum <checksum1> <checksum2>");
		return 0;
	}

	checksum1 = argv[1];
	checksum2 = argv[2];

	while( checksum1[i] != 0 && checksum2[i] != 0 )
	{
		i++;
		if( checksum1[i] != checksum2[i] )
			matches = 0;
	}

	printf( "%s\n%s\n" , checksum1 , checksum2 );

	if( matches )
		puts("The checksums match!");
	else
		puts("The checksums do not match!");

	return 0;
	
}