/* GIO - GLib Input, Output and Streaming Library
 * 
 * Copyright (C) 2006-2007 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Alexander Larsson <alexl@redhat.com>
 */

#ifndef __G_VFS_BACKEND_SMB_BROWSE_H__
#define __G_VFS_BACKEND_SMB_BROWSE_H__

#include <gvfsbackend.h>
#include <gmountspec.h>

G_BEGIN_DECLS

#define G_VFS_TYPE_BACKEND_SMB_BROWSE         (g_vfs_backend_smb_browse_get_type ())
#define G_VFS_BACKEND_SMB_BROWSE(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), G_VFS_TYPE_BACKEND_SMB_BROWSE, GVfsBackendSmbBrowse))
#define G_VFS_BACKEND_SMB_BROWSE_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), G_VFS_TYPE_BACKEND_SMB_BROWSE, GVfsBackendSmbBrowseClass))
#define G_VFS_IS_BACKEND_SMB_BROWSE(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_VFS_TYPE_BACKEND_SMB_BROWSE))
#define G_VFS_IS_BACKEND_SMB_BROWSE_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), G_VFS_TYPE_BACKEND_SMB_BROWSE))
#define G_VFS_BACKEND_SMB_BROWSE_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_VFS_TYPE_BACKEND_SMB_BROWSE, GVfsBackendSmbBrowseClass))

typedef struct _GVfsBackendSmbBrowse        GVfsBackendSmbBrowse;
typedef struct _GVfsBackendSmbBrowseClass   GVfsBackendSmbBrowseClass;

struct _GVfsBackendSmbBrowseClass
{
  GVfsBackendClass parent_class;
};

GType g_vfs_backend_smb_browse_get_type (void) G_GNUC_CONST;
  
#define BACKEND_SETUP_FUNC g_vfs_smb_browse_daemon_init
void g_vfs_smb_browse_daemon_init (void);
  
G_END_DECLS

#endif /* __G_VFS_BACKEND_SMB_BROWSE_H__ */
