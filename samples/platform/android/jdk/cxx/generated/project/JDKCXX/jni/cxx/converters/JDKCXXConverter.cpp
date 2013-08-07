/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



#include <JDKCXXConverter.hpp>

#define LOG_TAG "JDKCXXConverter"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

// Proxy Converter Types
void convert_java_lang_String(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_String *cxx_object = new java_lang_String(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_HttpURLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_HttpURLConnection *cxx_object = new java_net_HttpURLConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_HashMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_HashMap *cxx_object = new java_util_HashMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_ArrayList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_ArrayList *cxx_object = new java_util_ArrayList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_Charset(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_charset_Charset *cxx_object = new java_nio_charset_Charset(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Object(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_Object *cxx_object = new java_lang_Object(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Class(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_Class *cxx_object = new java_lang_Class(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_ClassLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_ClassLoader *cxx_object = new java_lang_ClassLoader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_InputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_io_InputStream *cxx_object = new java_io_InputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URL(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_URL *cxx_object = new java_net_URL(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLStreamHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_URLStreamHandler *cxx_object = new java_net_URLStreamHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URI(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_URI *cxx_object = new java_net_URI(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_Proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_Proxy *cxx_object = new java_net_Proxy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_Proxy_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (java_net_Proxy_Type::DIRECT == cxx_value)
			{
				enum_string = "DIRECT";
				break;
			}
			if (java_net_Proxy_Type::HTTP == cxx_value)
			{
				enum_string = "HTTP";
				break;
			}
			if (java_net_Proxy_Type::SOCKS == cxx_value)
			{
				enum_string = "SOCKS";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("java/net/Proxy$Type"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("DIRECT", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::DIRECT;
					break;
				}
				if (strcmp("HTTP", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::HTTP;
					break;
				}
				if (strcmp("SOCKS", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::SOCKS;
					break;
				}
		} 
		while (0);		
	}
}
void convert_java_net_SocketAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_SocketAddress *cxx_object = new java_net_SocketAddress(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_URLConnection *cxx_object = new java_net_URLConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Permission(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_Permission *cxx_object = new java_security_Permission(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_PermissionCollection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_PermissionCollection *cxx_object = new java_security_PermissionCollection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Enumeration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Enumeration *cxx_object = new java_util_Enumeration(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_FileNameMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_FileNameMap *cxx_object = new java_net_FileNameMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Map(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Map *cxx_object = new java_util_Map(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Collection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Collection *cxx_object = new java_util_Collection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Iterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Iterator *cxx_object = new java_util_Iterator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Set(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Set *cxx_object = new java_util_Set(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Map_Entry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Map_Entry *cxx_object = new java_util_Map_Entry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_List(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_List *cxx_object = new java_util_List(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_ListIterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_ListIterator *cxx_object = new java_util_ListIterator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_OutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_io_OutputStream *cxx_object = new java_io_OutputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_ContentHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_ContentHandlerFactory *cxx_object = new java_net_ContentHandlerFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_ContentHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_ContentHandler *cxx_object = new java_net_ContentHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLStreamHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_net_URLStreamHandlerFactory *cxx_object = new java_net_URLStreamHandlerFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_TypeVariable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_TypeVariable *cxx_object = new java_lang_reflect_TypeVariable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_Type *cxx_object = new java_lang_reflect_Type(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_GenericDeclaration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_GenericDeclaration *cxx_object = new java_lang_reflect_GenericDeclaration(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Package(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_Package *cxx_object = new java_lang_Package(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_annotation_Annotation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_annotation_Annotation *cxx_object = new java_lang_annotation_Annotation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Method(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_Method *cxx_object = new java_lang_reflect_Method(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Constructor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_Constructor *cxx_object = new java_lang_reflect_Constructor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Field(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_reflect_Field *cxx_object = new java_lang_reflect_Field(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_ProtectionDomain(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_ProtectionDomain *cxx_object = new java_security_ProtectionDomain(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_CodeSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_CodeSource *cxx_object = new java_security_CodeSource(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_CodeSigner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_CodeSigner *cxx_object = new java_security_CodeSigner(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_cert_CertPath(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_cert_CertPath *cxx_object = new java_security_cert_CertPath(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_cert_Certificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_cert_Certificate *cxx_object = new java_security_cert_Certificate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_PublicKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_PublicKey *cxx_object = new java_security_PublicKey(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Timestamp(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_Timestamp *cxx_object = new java_security_Timestamp(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Date(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Date *cxx_object = new java_util_Date(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Principal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_security_Principal *cxx_object = new java_security_Principal(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ByteBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_ByteBuffer *cxx_object = new java_nio_ByteBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ByteOrder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_ByteOrder *cxx_object = new java_nio_ByteOrder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_CharBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_CharBuffer *cxx_object = new java_nio_CharBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_CharSequence(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_CharSequence *cxx_object = new java_lang_CharSequence(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ShortBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_ShortBuffer *cxx_object = new java_nio_ShortBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_IntBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_IntBuffer *cxx_object = new java_nio_IntBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_LongBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_LongBuffer *cxx_object = new java_nio_LongBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_FloatBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_FloatBuffer *cxx_object = new java_nio_FloatBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_DoubleBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_DoubleBuffer *cxx_object = new java_nio_DoubleBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_SortedMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_SortedMap *cxx_object = new java_util_SortedMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Comparator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Comparator *cxx_object = new java_util_Comparator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Locale(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_util_Locale *cxx_object = new java_util_Locale(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CharsetDecoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_charset_CharsetDecoder *cxx_object = new java_nio_charset_CharsetDecoder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CoderResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_charset_CoderResult *cxx_object = new java_nio_charset_CoderResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CodingErrorAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_charset_CodingErrorAction *cxx_object = new java_nio_charset_CodingErrorAction(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CharsetEncoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_nio_charset_CharsetEncoder *cxx_object = new java_nio_charset_CharsetEncoder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_StringBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_StringBuffer *cxx_object = new java_lang_StringBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_StringBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		java_lang_StringBuilder *cxx_object = new java_lang_StringBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}

// Array Converter Types
void convert_java_lang_String_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_String> *cxx_vector = (std::vector<JDKCXX::java_lang_String> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_String>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_String> *cxx_vector = (std::vector<JDKCXX::java_lang_String> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_String *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_HttpURLConnection_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_HttpURLConnection> *cxx_vector = (std::vector<JDKCXX::java_net_HttpURLConnection> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_HttpURLConnection>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_HttpURLConnection> *cxx_vector = (std::vector<JDKCXX::java_net_HttpURLConnection> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_HttpURLConnection *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_HashMap_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_HashMap> *cxx_vector = (std::vector<JDKCXX::java_util_HashMap> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_HashMap>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_HashMap> *cxx_vector = (std::vector<JDKCXX::java_util_HashMap> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_HashMap *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_ArrayList_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_ArrayList> *cxx_vector = (std::vector<JDKCXX::java_util_ArrayList> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_ArrayList>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_ArrayList> *cxx_vector = (std::vector<JDKCXX::java_util_ArrayList> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_ArrayList *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_charset_Charset_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_charset_Charset> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_Charset> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_charset_Charset>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_charset_Charset> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_Charset> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_charset_Charset *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_Object_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_Object> *cxx_vector = (std::vector<JDKCXX::java_lang_Object> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_Object>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_Object> *cxx_vector = (std::vector<JDKCXX::java_lang_Object> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_Object *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_Class_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_Class> *cxx_vector = (std::vector<JDKCXX::java_lang_Class> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_Class>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_Class> *cxx_vector = (std::vector<JDKCXX::java_lang_Class> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_Class *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_ClassLoader_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_ClassLoader> *cxx_vector = (std::vector<JDKCXX::java_lang_ClassLoader> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_ClassLoader>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_ClassLoader> *cxx_vector = (std::vector<JDKCXX::java_lang_ClassLoader> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_ClassLoader *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_io_InputStream_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_io_InputStream> *cxx_vector = (std::vector<JDKCXX::java_io_InputStream> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_io_InputStream>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_io_InputStream> *cxx_vector = (std::vector<JDKCXX::java_io_InputStream> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_io_InputStream *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_URL_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_URL> *cxx_vector = (std::vector<JDKCXX::java_net_URL> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_URL>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_URL> *cxx_vector = (std::vector<JDKCXX::java_net_URL> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_URL *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_URLStreamHandler_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_URLStreamHandler> *cxx_vector = (std::vector<JDKCXX::java_net_URLStreamHandler> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_URLStreamHandler>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_URLStreamHandler> *cxx_vector = (std::vector<JDKCXX::java_net_URLStreamHandler> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_URLStreamHandler *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_URI_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_URI> *cxx_vector = (std::vector<JDKCXX::java_net_URI> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_URI>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_URI> *cxx_vector = (std::vector<JDKCXX::java_net_URI> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_URI *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_Proxy_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_Proxy> *cxx_vector = (std::vector<JDKCXX::java_net_Proxy> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_Proxy>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_Proxy> *cxx_vector = (std::vector<JDKCXX::java_net_Proxy> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_Proxy *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_Proxy_Type_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<java_net_Proxy_Type::java_net_Proxy_Type> *cxx_vector = (std::vector<java_net_Proxy_Type::java_net_Proxy_Type> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<java_net_Proxy_Type::java_net_Proxy_Type>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<java_net_Proxy_Type::java_net_Proxy_Type> *cxx_vector = (std::vector<java_net_Proxy_Type::java_net_Proxy_Type> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((java_net_Proxy_Type::java_net_Proxy_Type *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_SocketAddress_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_SocketAddress> *cxx_vector = (std::vector<JDKCXX::java_net_SocketAddress> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_SocketAddress>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_SocketAddress> *cxx_vector = (std::vector<JDKCXX::java_net_SocketAddress> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_SocketAddress *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_URLConnection_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_URLConnection> *cxx_vector = (std::vector<JDKCXX::java_net_URLConnection> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_URLConnection>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_URLConnection> *cxx_vector = (std::vector<JDKCXX::java_net_URLConnection> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_URLConnection *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_Permission_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_Permission> *cxx_vector = (std::vector<JDKCXX::java_security_Permission> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_Permission>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_Permission> *cxx_vector = (std::vector<JDKCXX::java_security_Permission> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_Permission *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_PermissionCollection_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_PermissionCollection> *cxx_vector = (std::vector<JDKCXX::java_security_PermissionCollection> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_PermissionCollection>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_PermissionCollection> *cxx_vector = (std::vector<JDKCXX::java_security_PermissionCollection> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_PermissionCollection *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Enumeration_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Enumeration> *cxx_vector = (std::vector<JDKCXX::java_util_Enumeration> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Enumeration>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Enumeration> *cxx_vector = (std::vector<JDKCXX::java_util_Enumeration> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Enumeration *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_FileNameMap_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_FileNameMap> *cxx_vector = (std::vector<JDKCXX::java_net_FileNameMap> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_FileNameMap>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_FileNameMap> *cxx_vector = (std::vector<JDKCXX::java_net_FileNameMap> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_FileNameMap *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Map_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Map> *cxx_vector = (std::vector<JDKCXX::java_util_Map> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Map>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Map> *cxx_vector = (std::vector<JDKCXX::java_util_Map> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Map *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Collection_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Collection> *cxx_vector = (std::vector<JDKCXX::java_util_Collection> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Collection>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Collection> *cxx_vector = (std::vector<JDKCXX::java_util_Collection> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Collection *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Iterator_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Iterator> *cxx_vector = (std::vector<JDKCXX::java_util_Iterator> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Iterator>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Iterator> *cxx_vector = (std::vector<JDKCXX::java_util_Iterator> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Iterator *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Set_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Set> *cxx_vector = (std::vector<JDKCXX::java_util_Set> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Set>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Set> *cxx_vector = (std::vector<JDKCXX::java_util_Set> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Set *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Map_Entry_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Map_Entry> *cxx_vector = (std::vector<JDKCXX::java_util_Map_Entry> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Map_Entry>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Map_Entry> *cxx_vector = (std::vector<JDKCXX::java_util_Map_Entry> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Map_Entry *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_List_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_List> *cxx_vector = (std::vector<JDKCXX::java_util_List> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_List>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_List> *cxx_vector = (std::vector<JDKCXX::java_util_List> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_List *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_ListIterator_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_ListIterator> *cxx_vector = (std::vector<JDKCXX::java_util_ListIterator> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_ListIterator>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_ListIterator> *cxx_vector = (std::vector<JDKCXX::java_util_ListIterator> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_ListIterator *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_io_OutputStream_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_io_OutputStream> *cxx_vector = (std::vector<JDKCXX::java_io_OutputStream> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_io_OutputStream>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_io_OutputStream> *cxx_vector = (std::vector<JDKCXX::java_io_OutputStream> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_io_OutputStream *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_ContentHandlerFactory_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_ContentHandlerFactory> *cxx_vector = (std::vector<JDKCXX::java_net_ContentHandlerFactory> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_ContentHandlerFactory>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_ContentHandlerFactory> *cxx_vector = (std::vector<JDKCXX::java_net_ContentHandlerFactory> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_ContentHandlerFactory *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_ContentHandler_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_ContentHandler> *cxx_vector = (std::vector<JDKCXX::java_net_ContentHandler> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_ContentHandler>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_ContentHandler> *cxx_vector = (std::vector<JDKCXX::java_net_ContentHandler> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_ContentHandler *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_net_URLStreamHandlerFactory_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_net_URLStreamHandlerFactory> *cxx_vector = (std::vector<JDKCXX::java_net_URLStreamHandlerFactory> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_net_URLStreamHandlerFactory>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_net_URLStreamHandlerFactory> *cxx_vector = (std::vector<JDKCXX::java_net_URLStreamHandlerFactory> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_net_URLStreamHandlerFactory *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_TypeVariable_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_TypeVariable> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_TypeVariable> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_TypeVariable>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_TypeVariable> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_TypeVariable> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_TypeVariable *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_Type_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_Type> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Type> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_Type>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_Type> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Type> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_Type *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_GenericDeclaration_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_GenericDeclaration> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_GenericDeclaration> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_GenericDeclaration>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_GenericDeclaration> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_GenericDeclaration> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_GenericDeclaration *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_Package_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_Package> *cxx_vector = (std::vector<JDKCXX::java_lang_Package> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_Package>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_Package> *cxx_vector = (std::vector<JDKCXX::java_lang_Package> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_Package *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_annotation_Annotation_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_annotation_Annotation> *cxx_vector = (std::vector<JDKCXX::java_lang_annotation_Annotation> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_annotation_Annotation>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_annotation_Annotation> *cxx_vector = (std::vector<JDKCXX::java_lang_annotation_Annotation> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_annotation_Annotation *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_Method_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_Method> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Method> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_Method>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_Method> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Method> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_Method *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_Constructor_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_Constructor> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Constructor> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_Constructor>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_Constructor> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Constructor> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_Constructor *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_reflect_Field_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_reflect_Field> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Field> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_reflect_Field>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_reflect_Field> *cxx_vector = (std::vector<JDKCXX::java_lang_reflect_Field> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_reflect_Field *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_ProtectionDomain_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_ProtectionDomain> *cxx_vector = (std::vector<JDKCXX::java_security_ProtectionDomain> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_ProtectionDomain>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_ProtectionDomain> *cxx_vector = (std::vector<JDKCXX::java_security_ProtectionDomain> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_ProtectionDomain *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_CodeSource_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_CodeSource> *cxx_vector = (std::vector<JDKCXX::java_security_CodeSource> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_CodeSource>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_CodeSource> *cxx_vector = (std::vector<JDKCXX::java_security_CodeSource> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_CodeSource *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_CodeSigner_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_CodeSigner> *cxx_vector = (std::vector<JDKCXX::java_security_CodeSigner> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_CodeSigner>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_CodeSigner> *cxx_vector = (std::vector<JDKCXX::java_security_CodeSigner> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_CodeSigner *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_cert_CertPath_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_cert_CertPath> *cxx_vector = (std::vector<JDKCXX::java_security_cert_CertPath> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_cert_CertPath>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_cert_CertPath> *cxx_vector = (std::vector<JDKCXX::java_security_cert_CertPath> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_cert_CertPath *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_cert_Certificate_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_cert_Certificate> *cxx_vector = (std::vector<JDKCXX::java_security_cert_Certificate> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_cert_Certificate>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_cert_Certificate> *cxx_vector = (std::vector<JDKCXX::java_security_cert_Certificate> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_cert_Certificate *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_PublicKey_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_PublicKey> *cxx_vector = (std::vector<JDKCXX::java_security_PublicKey> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_PublicKey>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_PublicKey> *cxx_vector = (std::vector<JDKCXX::java_security_PublicKey> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_PublicKey *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_Timestamp_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_Timestamp> *cxx_vector = (std::vector<JDKCXX::java_security_Timestamp> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_Timestamp>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_Timestamp> *cxx_vector = (std::vector<JDKCXX::java_security_Timestamp> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_Timestamp *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Date_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Date> *cxx_vector = (std::vector<JDKCXX::java_util_Date> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Date>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Date> *cxx_vector = (std::vector<JDKCXX::java_util_Date> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Date *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_security_Principal_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_security_Principal> *cxx_vector = (std::vector<JDKCXX::java_security_Principal> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_security_Principal>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_security_Principal> *cxx_vector = (std::vector<JDKCXX::java_security_Principal> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_security_Principal *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_ByteBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_ByteBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_ByteBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_ByteBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_ByteBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_ByteBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_ByteBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_ByteOrder_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_ByteOrder> *cxx_vector = (std::vector<JDKCXX::java_nio_ByteOrder> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_ByteOrder>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_ByteOrder> *cxx_vector = (std::vector<JDKCXX::java_nio_ByteOrder> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_ByteOrder *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_CharBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_CharBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_CharBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_CharBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_CharBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_CharBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_CharBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_CharSequence_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_CharSequence> *cxx_vector = (std::vector<JDKCXX::java_lang_CharSequence> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_CharSequence>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_CharSequence> *cxx_vector = (std::vector<JDKCXX::java_lang_CharSequence> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_CharSequence *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_ShortBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_ShortBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_ShortBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_ShortBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_ShortBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_ShortBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_ShortBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_IntBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_IntBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_IntBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_IntBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_IntBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_IntBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_IntBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_LongBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_LongBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_LongBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_LongBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_LongBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_LongBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_LongBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_FloatBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_FloatBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_FloatBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_FloatBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_FloatBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_FloatBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_FloatBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_DoubleBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_DoubleBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_DoubleBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_DoubleBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_DoubleBuffer> *cxx_vector = (std::vector<JDKCXX::java_nio_DoubleBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_DoubleBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_SortedMap_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_SortedMap> *cxx_vector = (std::vector<JDKCXX::java_util_SortedMap> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_SortedMap>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_SortedMap> *cxx_vector = (std::vector<JDKCXX::java_util_SortedMap> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_SortedMap *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Comparator_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Comparator> *cxx_vector = (std::vector<JDKCXX::java_util_Comparator> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Comparator>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Comparator> *cxx_vector = (std::vector<JDKCXX::java_util_Comparator> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Comparator *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_util_Locale_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_util_Locale> *cxx_vector = (std::vector<JDKCXX::java_util_Locale> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_util_Locale>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_util_Locale> *cxx_vector = (std::vector<JDKCXX::java_util_Locale> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_util_Locale *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_charset_CharsetDecoder_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_charset_CharsetDecoder> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CharsetDecoder> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_charset_CharsetDecoder>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_charset_CharsetDecoder> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CharsetDecoder> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_charset_CharsetDecoder *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_charset_CoderResult_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_charset_CoderResult> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CoderResult> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_charset_CoderResult>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_charset_CoderResult> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CoderResult> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_charset_CoderResult *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_charset_CodingErrorAction_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_charset_CodingErrorAction> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CodingErrorAction> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_charset_CodingErrorAction>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_charset_CodingErrorAction> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CodingErrorAction> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_charset_CodingErrorAction *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_nio_charset_CharsetEncoder_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_nio_charset_CharsetEncoder> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CharsetEncoder> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_nio_charset_CharsetEncoder>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_nio_charset_CharsetEncoder> *cxx_vector = (std::vector<JDKCXX::java_nio_charset_CharsetEncoder> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_nio_charset_CharsetEncoder *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_StringBuffer_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_StringBuffer> *cxx_vector = (std::vector<JDKCXX::java_lang_StringBuffer> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_StringBuffer>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_StringBuffer> *cxx_vector = (std::vector<JDKCXX::java_lang_StringBuffer> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_StringBuffer *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}
void convert_java_lang_StringBuilder_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		jni->pushLocalFrame();

		cxx_converter item_converter = get_converter(converter_stack);

		std::vector<JDKCXX::java_lang_StringBuilder> *cxx_vector = (std::vector<JDKCXX::java_lang_StringBuilder> *) cxx_value;
		int count = cxx_vector->size();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		java_value = (long) jni->createObjectArray(count, jni->getClassRef( child_type.c_str() ));

		for(std::vector<JDKCXX::java_lang_StringBuilder>::iterator it = cxx_vector->begin(); it != cxx_vector->end(); ++it)
		{
			long cxx_item_ptr = (long) &(*it);
			long java_item_ptr = 0;
			int item_idx = it - cxx_vector->begin();
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			jni->setObjectArrayElement((jobjectArray) java_value, item_idx, (jobject) java_item_ptr);
		}

		java_value = (long) jni->popLocalFrame((jobject) java_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jni->pushLocalFrame();

		std::string child_type = jni->getJNIName( std::string("java.lang.Object") );
		CXXTypeHierarchy item_type;
		item_type.type_name = child_type;
		std::vector<CXXTypeHierarchy> child_types = cxx_type_hierarchy.child_types;
		if (child_types.size() > 0)
		{
			item_type = child_types.at(0);
			child_type = jni->getJNIName( item_type.type_name );
		}

		cxx_converter item_converter = get_converter(converter_stack);
		std::vector<JDKCXX::java_lang_StringBuilder> *cxx_vector = (std::vector<JDKCXX::java_lang_StringBuilder> *) cxx_value;
		int size = (int) jni->getArrayLength((jobjectArray) java_value);
		for (int idx = 0 ; idx < size; idx++)
		{
			long java_item_ptr = (long) jni->getObjectArrayElement((jobjectArray) java_value, idx);
			long cxx_item_ptr = 0;
			item_converter(java_item_ptr, cxx_item_ptr, item_type, converter_type, converter_stack);
			cxx_vector->push_back(*((JDKCXX::java_lang_StringBuilder *) cxx_item_ptr));
		}

		jni->popLocalFrame();
	}
}

// Array Of Array Converter Types
void convert_java_lang_String_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_HttpURLConnection_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_HashMap_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_ArrayList_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_charset_Charset_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_Object_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_Class_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_ClassLoader_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_io_InputStream_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_URL_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_URLStreamHandler_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_URI_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_Proxy_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_Proxy_Type_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_SocketAddress_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_URLConnection_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_Permission_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_PermissionCollection_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Enumeration_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_FileNameMap_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Map_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Collection_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Iterator_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Set_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Map_Entry_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_List_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_ListIterator_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_io_OutputStream_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_ContentHandlerFactory_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_ContentHandler_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_net_URLStreamHandlerFactory_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_TypeVariable_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_Type_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_GenericDeclaration_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_Package_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_annotation_Annotation_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_Method_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_Constructor_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_reflect_Field_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_ProtectionDomain_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_CodeSource_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_CodeSigner_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_cert_CertPath_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_cert_Certificate_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_PublicKey_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_Timestamp_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Date_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_security_Principal_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_ByteBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_ByteOrder_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_CharBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_CharSequence_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_ShortBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_IntBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_LongBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_FloatBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_DoubleBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_SortedMap_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Comparator_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_util_Locale_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_charset_CharsetDecoder_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_charset_CoderResult_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_charset_CodingErrorAction_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_nio_charset_CharsetEncoder_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_StringBuffer_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}
void convert_java_lang_StringBuilder_array_array_type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	//TODO
}



