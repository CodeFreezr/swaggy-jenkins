note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 0.1.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by the swagger code generator program.

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel swagger codegen", "src=https://github.com/swagger-api/swagger-codegen.git", "protocol=uri"

class
	API_ERROR

create
	make

feature {NONE} -- Initialization

	make (a_error: READABLE_STRING_GENERAL)
		do
			error := a_error
		ensure
			error_set: error = a_error
		end

feature -- Access

	error: READABLE_STRING_GENERAL
		-- Error generated by the API call.

end
