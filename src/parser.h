/*
	Copyright (C) 2017 by Claude SIMON (http://zeusw.org/epeios/contact.html).

	This file is part of XPPq.

    XPPq is free software: you can redistribute it and/or modify it
    under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    XPPq is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with XPPq.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PARSER_INC_
# define PARSER_INC_

# include "sclznd.h"

namespace parser {
	SCLZND_F( New );
	SCLZND_F( Parse );
	SCLZND_F( TagName );
	SCLZND_F( AttributeName );
	SCLZND_F( Value );
	SCLZND_F( Delete );
}

#endif
