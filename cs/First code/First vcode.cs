var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

Console.WriteLine("Hello Woyyyy");

app.MapGet("/", () => "Hello World!");

app.Run();
// Console.WriteLine("Hello World!");