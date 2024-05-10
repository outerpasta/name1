#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

static void parse(void) {
  xmlDocPtr doc;
  doc = xmlReadFile("assets/tileset.tsx", NULL, 0);
  xmlChar* filname = doc->last->children->next->properties->children->content;
  xmlChar* tilewidth   = doc->children->properties->next->next->next->children->content;
  xmlChar* tileheight   = doc->children->properties->next->next->next->next->children->content;
  printf("%s,%s,%s\n", filname, tilewidth, tileheight);
  xmlFreeDoc(doc);
}

void openDocument(void) {
  LIBXML_TEST_VERSION parse();
  xmlCleanupParser();
}
