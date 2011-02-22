// This file is part of BOINC.
// http://boinc.berkeley.edu
// Copyright (C) 2008 University of California
//
// BOINC is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// BOINC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with BOINC.  If not, see <http://www.gnu.org/licenses/>.

#ifdef _WIN32
extern HANDLE sandbox_account_interactive_token;
extern HANDLE sandbox_account_service_token;

extern void get_sandbox_account_interactive_token();
extern void get_sandbox_account_service_token();

extern int run_app_windows(
    const char* path, const char* cdir, int argc, char *const argv[], HANDLE&
);
#endif

extern void kill_all(vector<int>&);
extern bool any_process_exists(vector<int>&);
