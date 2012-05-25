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


void php_wxWebViewHistoryItem_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHistoryItem_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxWebViewHistoryItem_php* object = static_cast<wxWebViewHistoryItem_php*>(rsrc->ptr);
	
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
		php_printf("Deletion of wxWebViewHistoryItem done\n");
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

/* {{{ proto  wxWebViewHistoryItem::wxWebViewHistoryItem(string url, string title)
   Construtor. */
PHP_METHOD(php_wxWebViewHistoryItem, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::__construct\n");
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
	char* url0;
	long url_len0;
	char* title0;
	long title_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'ss' (&url0, &url_len0, &title0, &title_len0)\n");
		#endif

		char parse_parameters_string[] = "ss";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &url0, &url_len0, &title0, &title_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(url0, wxConvUTF8), wxString(title0, wxConvUTF8))\n");
				#endif

				_this = new wxWebViewHistoryItem_php(wxString(url0, wxConvUTF8), wxString(title0, wxConvUTF8));

				((wxWebViewHistoryItem_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxWebViewHistoryItem);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		((wxWebViewHistoryItem_php*) _this)->phpObj = getThis();
		
		((wxWebViewHistoryItem_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxWebViewHistoryItem_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewHistoryItem::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto string wxWebViewHistoryItem::GetUrl() */
PHP_METHOD(php_wxWebViewHistoryItem, GetUrl)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::GetUrl\n");
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
			zend_error(E_ERROR, "Failed to get the parent object that called wxWebViewHistoryItem::GetUrl\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxWebViewHistoryItem){
				references = &((wxWebViewHistoryItem_php*)_this)->references;
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
				php_printf("Executing RETURN_STRING(wxWebViewHistoryItem::GetUrl().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHistoryItem_php*)_this)->GetUrl();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHistoryItem::GetUrl\n");
	}
}
/* }}} */

/* {{{ proto string wxWebViewHistoryItem::GetTitle() */
PHP_METHOD(php_wxWebViewHistoryItem, GetTitle)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::GetTitle\n");
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
			zend_error(E_ERROR, "Failed to get the parent object that called wxWebViewHistoryItem::GetTitle\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxWebViewHistoryItem){
				references = &((wxWebViewHistoryItem_php*)_this)->references;
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
				php_printf("Executing RETURN_STRING(wxWebViewHistoryItem::GetTitle().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHistoryItem_php*)_this)->GetTitle();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHistoryItem::GetTitle\n");
	}
}
/* }}} */

void php_wxWebViewHandler_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHandler_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxWebViewHandler_php* object = static_cast<wxWebViewHandler_php*>(rsrc->ptr);
	
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
		php_printf("Deletion of wxWebViewHandler done\n");
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

/* {{{ proto  wxWebViewHandler::wxWebViewHandler(string scheme)
   Constructor. */
PHP_METHOD(php_wxWebViewHandler, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHandler::__construct\n");
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
	char* scheme0;
	long scheme_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&scheme0, &scheme_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &scheme0, &scheme_len0 ) == SUCCESS)
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
				php_printf("Executing __construct(wxString(scheme0, wxConvUTF8))\n");
				#endif

				_this = new wxWebViewHandler_php(wxString(scheme0, wxConvUTF8));

				((wxWebViewHandler_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxWebViewHandler);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		((wxWebViewHandler_php*) _this)->phpObj = getThis();
		
		((wxWebViewHandler_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxWebViewHandler_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewHandler::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto string wxWebViewHandler::GetName() */
PHP_METHOD(php_wxWebViewHandler, GetName)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHandler::GetName\n");
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
			zend_error(E_ERROR, "Failed to get the parent object that called wxWebViewHandler::GetName\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxWebViewHandler){
				references = &((wxWebViewHandler_php*)_this)->references;
				reference_type_found = true;
			}
			if((parent_rsrc_type == le_wxWebViewArchiveHandler) && (!reference_type_found)){
				references = &((wxWebViewArchiveHandler_php*)_this)->references;
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
				php_printf("Executing RETURN_STRING(wxWebViewHandler::GetName().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHandler_php*)_this)->GetName();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHandler::GetName\n");
	}
}
/* }}} */

/* {{{ proto wxFSFile wxWebViewHandler::GetFile(string uri) */
wxFSFile* wxWebViewHandler_php::GetFile(const wxString& uri)
{
	static zend_function* cached_function = NULL;
	static bool is_php_user_space_implemented = true;
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual wxWebViewHandler::GetFile\n");
	php_printf("===========================================\n");
	#endif
	
	zval** params[1];
	zval *arguments[1];
	
	//Initilize arguments array
	for(int i=0; i<1; i++)
	{
		MAKE_STD_ZVAL(arguments[i]);
	}

	zval* return_value;
	MAKE_STD_ZVAL(return_value);
	zval function_name;
	ZVAL_STRING(&function_name, "GetFile", 0);
	char* temp_string;
	char _wxResource[] = "wxResource";
	zval **tmp;
	int id_to_find;
	void* return_object;
	int rsrc_type;
	int function_called;
	
	//Parameters for conversion
	temp_string = (char*)malloc(sizeof(wxChar)*(uri.size()+1));
	strcpy(temp_string, (const char *) uri.char_str());
	ZVAL_STRING(arguments[0], temp_string, 1);
	free(temp_string);
		
	for(int i=0; i<1; i++)
	{
		params[i] = &arguments[i];
	}

	#ifdef USE_WXPHP_DEBUG
	php_printf("Trying to call user defined method\n");
	#endif
	
	//function_called = call_user_function(NULL, (zval**) &this->phpObj, &function_name, return_value, 1, arguments TSRMLS_CC);
	if(is_php_user_space_implemented)
	{
		function_called = wxphp_call_method((zval**) &this->phpObj, NULL, &cached_function, "GetFile", 7, &return_value, 1, params TSRMLS_CC);
	}
	else
	{
		function_called = FAILURE;
	}
	
	//Delete already used parameters from memory
	for(int i=0; i<1; i++)
	{
		efree(arguments[i]);
	}
	
	if(function_called == FAILURE)
	{
		is_php_user_space_implemented = false;
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Invocation of user defined method failed\n");
		#endif
		
		wxMessageBox("Failed to call virtual method 'wxWebViewHandler::GetFile'!", "Error");
	}

	#ifdef USE_WXPHP_DEBUG
	php_printf("Returning userspace value.\n");
	#endif
		
	if(Z_TYPE_P(return_value) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(return_value), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
		{
			id_to_find = Z_RESVAL_P(*tmp);
			return_object = zend_list_find(id_to_find, &rsrc_type);
		}

		//Threat it as a normal object on the calling function and not a php user space intiialized one
		wxFSFile_php* var = (wxFSFile_php*) return_object;
		var->references.UnInitialize();

		return (wxFSFile*) return_object;
	
}
/* }}} */

void php_wxWebViewArchiveHandler_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewArchiveHandler_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxWebViewArchiveHandler_php* object = static_cast<wxWebViewArchiveHandler_php*>(rsrc->ptr);
	
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
		php_printf("Deletion of wxWebViewArchiveHandler done\n");
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

/* {{{ proto  wxWebViewArchiveHandler::wxWebViewArchiveHandler(string scheme)
   Constructor. */
PHP_METHOD(php_wxWebViewArchiveHandler, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewArchiveHandler::__construct\n");
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
	char* scheme0;
	long scheme_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&scheme0, &scheme_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &scheme0, &scheme_len0 ) == SUCCESS)
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
				php_printf("Executing __construct(wxString(scheme0, wxConvUTF8))\n");
				#endif

				_this = new wxWebViewArchiveHandler_php(wxString(scheme0, wxConvUTF8));

				((wxWebViewArchiveHandler_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxWebViewArchiveHandler);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		((wxWebViewArchiveHandler_php*) _this)->phpObj = getThis();
		
		((wxWebViewArchiveHandler_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxWebViewArchiveHandler_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewArchiveHandler::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto wxFSFile wxWebViewArchiveHandler::GetFile(string uri) */
PHP_METHOD(php_wxWebViewArchiveHandler, GetFile)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewArchiveHandler::GetFile\n");
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
			zend_error(E_ERROR, "Failed to get the parent object that called wxWebViewArchiveHandler::GetFile\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxWebViewArchiveHandler){
				references = &((wxWebViewArchiveHandler_php*)_this)->references;
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
	char* uri0;
	long uri_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&uri0, &uri_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &uri0, &uri_len0 ) == SUCCESS)
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
				php_printf("Executing wxWebViewArchiveHandler::GetFile(wxString(uri0, wxConvUTF8)) to return object pointer\n\n");
				#endif

				wxFSFile_php* value_to_return1;
				value_to_return1 = (wxFSFile_php*) ((wxWebViewArchiveHandler_php*)_this)->GetFile(wxString(uri0, wxConvUTF8));

				if(value_to_return1 == NULL){
					ZVAL_NULL(return_value);
				}
				else if(value_to_return1->references.IsUserInitialized()){
					if(value_to_return1->phpObj != NULL){
						*return_value = *value_to_return1->phpObj;
						zval_add_ref(&value_to_return1->phpObj);
						return_is_user_initialized = true;
					}
					else{
						zend_error(E_ERROR, "Could not retreive original zval.");
					}
				}
				else{
					object_init_ex(return_value,php_wxFSFile_entry);
					add_property_resource(return_value, "wxResource", zend_list_insert(value_to_return1, le_wxFSFile));
				}

				if(Z_TYPE_P(return_value) != IS_NULL && value_to_return1 != _this && return_is_user_initialized){
					references->AddReference(return_value, "wxWebViewArchiveHandler::GetFile at call with 1 argument(s)");
				}


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewArchiveHandler::GetFile\n");
	}
}
/* }}} */

