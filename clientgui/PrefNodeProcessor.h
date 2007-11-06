// Berkeley Open Infrastructure for Network Computing
// http://boinc.berkeley.edu
// Copyright (C) 2005 University of California
//
// This is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any later version.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// To view the GNU Lesser General Public License visit
// http://www.gnu.org/copyleft/lesser.html
// or write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
#ifndef _PREFNODEPROCESSOR_H_
#define _PREFNODEPROCESSOR_H_

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface "PrefNodeProcessor.cpp"
#endif

#include "prefs.h"

class CPrefNodeProcessor : public CPrefNodeBase {

	DECLARE_DYNAMIC_CLASS(CPrefNodeProcessor)

public:
	CPrefNodeProcessor(wxWindow* parent = NULL, GLOBAL_PREFS* preferences = NULL);
    virtual ~CPrefNodeProcessor() {};

protected:

private:
    void OnRunIdleChanged(wxCommandEvent& event);

    CPrefValueBase* m_idleTime;

};

#endif // _PREFNODEPROCESSOR_H_

