#ifndef _SSLSCAN_SSL_H
#define _SSLSCAN_SSL_H
#include <Python.h>
#include "py_compat.h"
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

typedef struct {
	PyObject_HEAD
	int ret;
} sslscan_ssl_alert_obj;

typedef struct {
	PyObject_HEAD
	X509 *x509;
	EVP_PKEY *key;
} sslscan_ssl_pkey_obj;

typedef struct {
	PyObject_HEAD
	X509 *x509;
} sslscan_ssl_x509_obj;

typedef struct {
	PyObject_HEAD
	X509_EXTENSION *extension;
} sslscan_ssl_x509ext_obj;

extern PyTypeObject sslscan_ssl_alert_Type;
extern PyTypeObject sslscan_ssl_pkey_Type;
extern PyTypeObject sslscan_ssl_x509_Type;
extern PyTypeObject sslscan_ssl_x509ext_Type;

#endif