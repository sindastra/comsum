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

int sc = 1;
int a = 0;

int main( int argc , char *argv[] )
{

	if( argc < 3 )
	{
		puts("Usage: comsum <checksum1> <checksum2>");
		return 0;
	}

	while( argv[1][a] != 0 && argv[2][a] != 0 )
	{
		a++;
		if( argv[1][a] != argv[2][a] )
			sc = 0;
	}

	printf( "%s\n%s\n" , argv[1] , argv[2] );

	if( sc )
		printf("The checksums match!\n");
	else
		printf("The checksums do not match!\n");

	return 0;
	
}