const char* _Miscale_v1_json = R""""(
{
   "brand":"xiaomi",
   "model":"Miscale_v1",
   "model_id":"XMTZC04HM",
   "condition":["uuid", "contain", "181d", '&', "servicedata", "index", 0, "2"],
   "properties":{
      "unit":{
         "condition":["servicedata", 1, "2"],
         "decoder":["static_value", "kg"]
      },
      "weight":{
         "condition":["servicedata", 1, "2"],
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":['/', 200]
      },
      "_unit":{
         "condition":["servicedata", 1, "3"],
         "decoder":["static_value", "lbs"]
      },
      "_weight":{
         "condition":["servicedata", 1, "3"],
         "decoder":["value_from_hex_data", "servicedata", 2, 4, true, false],
         "post_proc":['/', 100]
      }
   }
})"""";