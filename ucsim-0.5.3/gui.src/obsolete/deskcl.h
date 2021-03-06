/*
 * Simulator of microcontrollers (deskcl.h)
 *
 * Copyright (C) 1999,99 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

#include "groupcl.h"


class cl_desk: public cl_group
{
public:
  cl_desk(class cl_box *ipos, char *iname, class cl_app *iapp):
    cl_group(ipos, iname, iapp) {}
  virtual int mk_views(class cl_group *ins_to);

  virtual int handle_event(struct t_event *event);
};


/* End of gui.src/deskcl.h */
