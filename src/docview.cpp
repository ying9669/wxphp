/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#include "php_wxwidgets.h"
#include "appmanagement.h"
#include "cfg.h"
#include "bookctrl.h"
#include "dnd.h"
#include "cmndlg.h"
#include "containers.h"
#include "ctrl.h"
#include "data.h"
#include "dc.h"
#include "docview.h"
#include "events.h"
#include "file.h"
#include "gdi.h"
#include "grid.h"
#include "html.h"
#include "help.h"
#include "logging.h"
#include "managedwnd.h"
#include "menus.h"
#include "misc.h"
#include "miscwnd.h"
#include "media.h"
#include "pickers.h"
#include "printing.h"
#include "ribbon.h"
#include "richtext.h"
#include "rtti.h"
#include "stc.h"
#include "streams.h"
#include "threading.h"
#include "validator.h"
#include "vfs.h"
#include "webview.h"
#include "aui.h"
#include "winlayout.h"
#include "xml.h"
#include "xrc.h"
#include "dvc.h"
#include "others.h"


void php_wxFileHistory_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxFileHistory_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxFileHistory_php* object = static_cast<wxFileHistory_php*>(rsrc->ptr);
	
	if(rsrc->ptr != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
		#endif
		
		if(object->references.IsUserInitialized())
		{	
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete object;
			
			rsrc->ptr = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxFileHistory done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}
}

/* {{{ proto  wxFileHistory::AddFileToHistory(string filename)
   Adds a file to the file history list, if the object has a pointer to an appropriate file menu. */
PHP_METHOD(php_wxFileHistory, AddFileToHistory)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::AddFileToHistory\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::AddFileToHistory\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	char* filename0;
	long filename_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&filename0, &filename_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &filename0, &filename_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::AddFileToHistory(wxString(filename0, wxConvUTF8))\n\n");
				#endif

				((wxFileHistory_php*)_this)->AddFileToHistory(wxString(filename0, wxConvUTF8));


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::AddFileToHistory\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::AddFilesToMenu()
   Appends the files in the history list, to all menus managed by the file history object. */
PHP_METHOD(php_wxFileHistory, AddFilesToMenu)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::AddFilesToMenu\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::AddFilesToMenu\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
	//Parameters for overload 1
	zval* menu1 = 0;
	void* object_pointer1_0 = 0;
	bool overload1_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

	//Overload 1
	overload1:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'z' (&menu1)\n");
		#endif

		char parse_parameters_string[] = "z";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &menu1 ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(menu1) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(menu1), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer1_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer1_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(menu1) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload1_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::AddFilesToMenu()\n\n");
				#endif

				((wxFileHistory_php*)_this)->AddFilesToMenu();


				return;
				break;
			}
		}
	}

	if(overload1_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::AddFilesToMenu((wxMenu*) object_pointer1_0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->AddFilesToMenu((wxMenu*) object_pointer1_0);

				references->AddReference(menu1, "wxFileHistory::AddFilesToMenu at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::AddFilesToMenu\n");
	}
}
/* }}} */

/* {{{ proto int wxFileHistory::GetBaseId()
   Returns the base identifier for the range used for appending items. */
PHP_METHOD(php_wxFileHistory, GetBaseId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::GetBaseId\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::GetBaseId\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_LONG(wxFileHistory::GetBaseId())\n\n");
				#endif

				ZVAL_LONG(return_value, ((wxFileHistory_php*)_this)->GetBaseId());


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::GetBaseId\n");
	}
}
/* }}} */

/* {{{ proto int wxFileHistory::GetCount()
   Returns the number of files currently stored in the file history. */
PHP_METHOD(php_wxFileHistory, GetCount)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::GetCount\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::GetCount\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_LONG(wxFileHistory::GetCount())\n\n");
				#endif

				ZVAL_LONG(return_value, ((wxFileHistory_php*)_this)->GetCount());


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::GetCount\n");
	}
}
/* }}} */

/* {{{ proto string wxFileHistory::GetHistoryFile(int index)
   Returns the file at this index (zero-based). */
PHP_METHOD(php_wxFileHistory, GetHistoryFile)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::GetHistoryFile\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::GetHistoryFile\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	long index0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'l' (&index0)\n");
		#endif

		char parse_parameters_string[] = "l";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &index0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_STRING(wxFileHistory::GetHistoryFile((size_t) index0).fn_str(), 1)\n\n");
				#endif

				wxString value_to_return1;
				value_to_return1 = ((wxFileHistory_php*)_this)->GetHistoryFile((size_t) index0);
				char* temp_string1;
				temp_string1 = (char*)malloc(sizeof(wxChar)*(value_to_return1.size()+1));
				strcpy (temp_string1, (const char *) value_to_return1.char_str() );
				ZVAL_STRING(return_value, temp_string1, 1);
				free(temp_string1);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::GetHistoryFile\n");
	}
}
/* }}} */

/* {{{ proto int wxFileHistory::GetMaxFiles()
   Returns the maximum number of files that can be stored. */
PHP_METHOD(php_wxFileHistory, GetMaxFiles)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::GetMaxFiles\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::GetMaxFiles\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_LONG(wxFileHistory::GetMaxFiles())\n\n");
				#endif

				ZVAL_LONG(return_value, ((wxFileHistory_php*)_this)->GetMaxFiles());


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::GetMaxFiles\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::Load(wxConfigBase config)
   Loads the file history from the given config object. */
PHP_METHOD(php_wxFileHistory, Load)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::Load\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::Load\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	zval* config0 = 0;
	void* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'O' (&config0, php_wxConfigBase_entry)\n");
		#endif

		char parse_parameters_string[] = "O";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &config0, php_wxConfigBase_entry ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(config0) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(config0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer0_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(config0) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::Load(*(wxConfigBase*) object_pointer0_0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->Load(*(wxConfigBase*) object_pointer0_0);

				references->AddReference(config0, "wxFileHistory::Load at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::Load\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::RemoveFileFromHistory(int i)
   Removes the specified file from the history. */
PHP_METHOD(php_wxFileHistory, RemoveFileFromHistory)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::RemoveFileFromHistory\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::RemoveFileFromHistory\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	long i0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'l' (&i0)\n");
		#endif

		char parse_parameters_string[] = "l";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &i0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::RemoveFileFromHistory((size_t) i0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->RemoveFileFromHistory((size_t) i0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::RemoveFileFromHistory\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::RemoveMenu(wxMenu &menu)
   Removes this menu from the list of those managed by this object. */
PHP_METHOD(php_wxFileHistory, RemoveMenu)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::RemoveMenu\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::RemoveMenu\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	zval* menu0 = 0;
	void* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'z' (&menu0)\n");
		#endif

		char parse_parameters_string[] = "z";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &menu0 ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(menu0) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(menu0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer0_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(menu0) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::RemoveMenu((wxMenu*) object_pointer0_0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->RemoveMenu((wxMenu*) object_pointer0_0);

				references->AddReference(menu0, "wxFileHistory::RemoveMenu at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::RemoveMenu\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::Save(wxConfigBase &config)
   Saves the file history into the given config object. */
PHP_METHOD(php_wxFileHistory, Save)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::Save\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::Save\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	zval* config0 = 0;
	void* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'O' (&config0, php_wxConfigBase_entry)\n");
		#endif

		char parse_parameters_string[] = "O";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &config0, php_wxConfigBase_entry ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(config0) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(config0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer0_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(config0) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::Save(*(wxConfigBase*) object_pointer0_0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->Save(*(wxConfigBase*) object_pointer0_0);

				references->AddReference(config0, "wxFileHistory::Save at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::Save\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::SetBaseId(int baseId)
   Sets the base identifier for the range used for appending items. */
PHP_METHOD(php_wxFileHistory, SetBaseId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::SetBaseId\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::SetBaseId\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	long baseId0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'l' (&baseId0)\n");
		#endif

		char parse_parameters_string[] = "l";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &baseId0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::SetBaseId((wxWindowID) baseId0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->SetBaseId((wxWindowID) baseId0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::SetBaseId\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::UseMenu(wxMenu &menu)
   Adds this menu to the list of those menus that are managed by this file history object. */
PHP_METHOD(php_wxFileHistory, UseMenu)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::UseMenu\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxFileHistory::UseMenu\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxFileHistory){
				references = &((wxFileHistory_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	zval* menu0 = 0;
	void* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'z' (&menu0)\n");
		#endif

		char parse_parameters_string[] = "z";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &menu0 ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(menu0) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(menu0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer0_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(menu0) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxFileHistory::UseMenu((wxMenu*) object_pointer0_0)\n\n");
				#endif

				((wxFileHistory_php*)_this)->UseMenu((wxMenu*) object_pointer0_0);

				references->AddReference(menu0, "wxFileHistory::UseMenu at call with 1 argument(s)");

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxFileHistory::UseMenu\n");
	}
}
/* }}} */

/* {{{ proto  wxFileHistory::wxFileHistory(int maxFiles, int idBase)
   Constructor. */
PHP_METHOD(php_wxFileHistory, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxFileHistory::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	
	//Parameters for overload 0
	long maxFiles0;
	long idBase0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received >= 0  && arguments_received <= 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '|ll' (&maxFiles0, &idBase0)\n");
		#endif

		char parse_parameters_string[] = "|ll";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &maxFiles0, &idBase0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif

				_this = new wxFileHistory_php();

				((wxFileHistory_php*) _this)->references.Initialize();
				break;
			}
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct((size_t) maxFiles0)\n");
				#endif

				_this = new wxFileHistory_php((size_t) maxFiles0);

				((wxFileHistory_php*) _this)->references.Initialize();
				break;
			}
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct((size_t) maxFiles0, (wxWindowID) idBase0)\n");
				#endif

				_this = new wxFileHistory_php((size_t) maxFiles0, (wxWindowID) idBase0);

				((wxFileHistory_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxFileHistory);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		((wxFileHistory_php*) _this)->phpObj = getThis();
		
		((wxFileHistory_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxFileHistory_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxFileHistory::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

